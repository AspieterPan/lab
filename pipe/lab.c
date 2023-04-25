#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 10  // 缓冲区大小
#define NUM_PRODUCERS 2 // 生产者数量
#define NUM_CONSUMERS 2 // 消费者数量
#define MAX_ITEMS 100   // 每个生产者生产的最大数量

typedef struct {
  int items[BUFFER_SIZE]; // 缓冲区数组
  int in;                 // 缓冲区的写指针
  int out;                // 缓冲区的读指针
  sem_t full;             // 缓冲区满信号量
  sem_t empty;            // 缓冲区空信号量
  pthread_mutex_t mutex;  // 互斥锁
} buffer_t;

buffer_t buffer;

void *producer(void *arg) {
  int id = *(int *)arg;
  int count = 0;

  while (count < MAX_ITEMS) {
    int item = rand() % 100;           // 产生随机数
    sem_wait(&buffer.empty);           // 等待缓冲区空
    pthread_mutex_lock(&buffer.mutex); // 上锁

    // 把 item 放入缓冲区
    buffer.items[buffer.in] = item;
    buffer.in = (buffer.in + 1) % BUFFER_SIZE;

    printf("Producer %d produced item %d\n", id, item);
    fflush(stdout);

    pthread_mutex_unlock(&buffer.mutex); // 解锁
    sem_post(&buffer.full);              // 发送缓冲区满信号
    count++;
  }

  return NULL;
}

void *consumer(void *arg) {
  int id = *(int *)arg;
  int count = 0;

  while (count < MAX_ITEMS) {
    sem_wait(&buffer.full);            // 等待缓冲区满
    pthread_mutex_lock(&buffer.mutex); // 上锁

    // 从缓冲区取出一个 item
    int item = buffer.items[buffer.out];
    buffer.out = (buffer.out + 1) % BUFFER_SIZE;

    printf("Consumer %d consumed item %d\n", id, item);
    fflush(stdout);

    pthread_mutex_unlock(&buffer.mutex); // 解锁
    sem_post(&buffer.empty);             // 发送缓冲区空信号
    count++;
  }

  return NULL;
}

int main() {
  pthread_t producers[NUM_PRODUCERS];
  pthread_t consumers[NUM_CONSUMERS];
  int i, id[NUM_PRODUCERS + NUM_CONSUMERS];

  // 初始化缓冲区、信号量和互斥锁
  buffer.in = 0;
  buffer.out = 0;
  sem_init(&buffer.empty, 0, BUFFER_SIZE);
  sem_init(&buffer.full, 0, 0);
  pthread_mutex_init(&buffer.mutex, NULL);

  // 创建生产者线程
  for (i = 0; i < NUM_PRODUCERS; i++) {
    id[i] = i + 1;
    pthread_create(&producers[i], NULL, producer, &id[i]);
  }

  // 创建消费者线程
  for (i = 0; i < NUM_CONSUMERS; i++) {
    id[NUM_PRODUCERS + i] = i + 1;
    pthread_create(&consumers[i], NULL, consumer, &id[NUM_PRODUCERS + i]);
  }

  // 等待所有生产者和消费者线程结束
  for (i = 0; i < NUM_PRODUCERS; i++) {
    pthread_join(producers[i], NULL);
  }
  for (i = 0; i < NUM_CONSUMERS; i++) {
    pthread_join(consumers[i], NULL);
  }

  // 销毁信号量和互斥锁
  sem_close(&buffer.empty);
  sem_close(&buffer.full);
  pthread_mutex_destroy(&buffer.mutex);

  return 0;
}
