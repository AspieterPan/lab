#!/usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np


def foo(a, *, b, c):
    print(a)
    print(b)
    print(c)


foo(1)
