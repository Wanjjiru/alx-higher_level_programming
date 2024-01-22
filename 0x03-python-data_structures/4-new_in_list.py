#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    temporary = my_list[:]
    if idx < 0:
        return (temporary)
    if idx > len(my_list) -1:
        return (temporary)
    temporary[idx] = element
    return (temporary)
