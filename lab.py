from typing import Self
from queue import Queue


class Node:
    def __init__(self, val=-1, left: Self = None, right: Self = None):
        self.val = val
        self.left = left
        self.right = right

    def show(self):
        if self.left:
            self.left.show()
        print(self.val)
        if self.right:
            self.right.show()


class Tree:
    def __init__(self, head: Self = None):
        self.head = head

    def show(self):
        self.head.show()

    def get_WPL(self):
        WPL = 0
        q = Queue()
        q.put(self.head)
        level = -1
        while not q.empty():
            level += 1
            for i in range(q.qsize()):
                item = q.get()
                if not (item.left or item.right):
                    WPL += item.val * level
                else:
                    if item.left:
                        q.put(item.left)
                    if item.right:
                        q.put(item.right)
        return WPL


def create_test_tree() -> Tree:
    n1 = Node(1)
    n2 = Node(2)
    n3 = Node(3)
    n4 = Node(4)
    n1.left = n2
    n1.right = n3
    n3.right = n4
    tree = Tree(n1)
    return tree


if __name__ == "__main__":
    tree = create_test_tree()
    tree.show()
    print()
    wpl = tree.get_WPL()
    print(wpl)
