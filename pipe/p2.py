import os
import time
import linecache
a = 0


# def read(n: int) -> str:
#     s = linecache.getline("./pipe", n)
#     return s

def read() -> str:
    with open("./pipe", "r") as f:
        s = f.readline()
    return s


a = 1
while True:
    s = read()
    time.sleep(1)
    print("read line:", s)
    print(a)
    a += 1
