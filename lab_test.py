import fileinput


def alias2fish():
    for line in fileinput.input():
        pos = line.find("=")
        print(f"alias {line[:pos]} {line[pos+1:]}")


if __name__ == "__main__":
    alias2fish()
