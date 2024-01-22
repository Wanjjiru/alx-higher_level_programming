#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    list_len = len(my_list)
    list_p = []
    for x in range(list_len):
        if my_list[x] % 2 == 0:
            list_p.append(True)
        else:
            list_p.append(False)
    return (list_p)
