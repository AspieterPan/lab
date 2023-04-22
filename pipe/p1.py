import os
import time
import random


def write():
    with open("./pipe", "r+") as f:
        n = f.readline()
        print("this is n: ", n)
        time.sleep(random.random())
        s = int(n.strip()) + 1
        print("This is s ", s)
        f.seek(0, 0)
        f.write(str(s))


a = 0
while True:
    a += 1
    time.sleep(random.random())
    write()
    print(a)
