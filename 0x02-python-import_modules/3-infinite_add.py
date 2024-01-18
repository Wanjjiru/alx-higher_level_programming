#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    sumv = 0
    for p in range(1, len(argv)):
        sumv += int(argv[p])
    print("{}".format(sumv))
