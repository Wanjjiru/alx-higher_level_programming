#!/usr/bin/python3
def uppercase(str):
    for iterator in str:
        temporary = iterator
        if ord(temporary) >= 97 and ord(temporary) <= 122:
            temporary = chr(ord(iterator) - 32)
        print("{}".format(temporary), end='')
    print()
