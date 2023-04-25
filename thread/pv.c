#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <fcntl.h>


void producer(void *arg){
  while(1){
    printf("(");
  }
  return;
  
}

void consumer(void *arg){
  while(1){
    printf(")");
  }
  return;
}

int main(int arg){
  pthread_t producer_thread, consumer_thread;
  pthread_create(&producer_thread, NULL, producer, NULL);
  pthread_create(&consumer_thread, NULL, consumer, NULL);

  pthread_join(producer_thread, NULL);
  pthread_join(consumer_thread, NULL);

  return 0;
}
