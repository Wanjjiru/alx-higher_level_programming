#!/usr/bin/python3
for p in range(ord('z'), ord('a') - 1, -1):
    if p % 2 == 0:
        diff = 0
    else:
        diff = 32
    print('{}'.format(chr(p - diff)), end='')
