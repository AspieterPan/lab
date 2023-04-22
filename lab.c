#include <pthread.h>
#include <stdio.h>

void *Thread1(void *arg) {
  printf("This is Thread1.\n");
  return "Thread1 成功执行";
}

void *Thread2(void *arg) {
  printf("This is Thread2.\n");
  return "Thread2 成功执行";
}

int main() {
  int res;
  pthread_t mythread1, mythread2;
  void *thread_result;

  res = pthread_create(&mythread1, NULL, Thread1, NULL);
  if (res != 0) {
    printf("Thread1 init Falled\n");
    return 0;
  }

  res = pthread_create(&mythread2, NULL, Thread2, NULL);
  if (res != 0) {
    printf("Thread2 init Falled\n");
    return 0;
  }

  res = pthread_join(mythread1, &thread_result);
  printf("%s\n", (char *)thread_result);

  res = pthread_join(mythread2, &thread_result);
  printf("%s\n", (char *)thread_result);
  printf("over");
  return 0;
}
