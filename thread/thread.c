#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ticket_sum = 10;
pthread_mutex_t mutex;

void *sell_ticket(void *arg) {
  int i;
  for ( i = 0; i < 10; i++) {
    pthread_mutex_lock(&mutex);
    if (ticket_sum > 0) {
      sleep(1);
      printf("%u sell the %dth ticket\n", pthread_self(),
             10 - ticket_sum + 1);
      ticket_sum--;
    }
    pthread_mutex_unlock(&mutex);
  }
  return 0;
}

int main() {
  int i;
  int flag;
  void *ans;
  pthread_t tids[4];

  pthread_mutex_init(&mutex, NULL);

  for (i = 0; i < 4; i++) {
    flag = pthread_create(&tids[i], NULL, &sell_ticket, NULL);
    if (flag != 0) {
      printf("thread creating failed\n");
      return 0;
    }
  }
  sleep(10);
  for (i = 0; i < 4; i++) {
    flag = pthread_join(tids[i], &ans);
    if (flag != 0) {
      printf("tid=%d wait failed\n", tids[i]);
      return 0;
    }
  }
  return 0;
}
