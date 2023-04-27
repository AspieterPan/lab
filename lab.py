li = [1, 2, 3, 4, 5]


class fool():
    def __init__(self, li):
        self.li = li
        self.lhs = li[2]

    def mod(self, x):
        self.lhs += 10


f = fool(li)
f.mod(2)

print(li)
