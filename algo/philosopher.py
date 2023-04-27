import threading
import random
import time
import pdb


class Philosopher(threading.Thread):
    def __init__(self, index, forks):
        threading.Thread.__init__(self)
        self.index = index
        self.forks = forks
        self.lhs = (index - 1) % len(forks)
        self.rhs = (index + 1) % len(forks)

    def run(self):
        self.eat()

    def eat(self):
        while True:
            # pdb.set_trace()
            sem_num.acquire()
            self.forks[self.lhs].acquire()
            print(f"Philosopher {self.index} get {self.lhs}")

            self.forks[self.rhs].acquire()
            print(f"Philosopher {self.index} get {self.rhs}")

            print(f"Philosopher {self.index} is eating")

            self.forks[self.lhs].release()
            print(f"Philosopher {self.index} release {self.lhs}")

            self.forks[self.rhs].release()
            print(f"Philosopher {self.index} release {self.rhs}\n")

            sem_num.release()


if __name__ == "__main__":
    num = 5
    forks = []
    sem_num = threading.Semaphore(num - 1)

    for i in range(num):
        sem = threading.Semaphore(1)
        forks.append(sem)

    Philos = []
    for i in range(num):
        Philo = Philosopher(i, forks)
        Philos.append(Philo)

    for i in range(num):
        Philos[i].start()
