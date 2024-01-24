#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    temporary = a_dictionary.copy()
    for k, v in temporary.items():
        if value == v:
            a_dictionary.pop(k)
    return a_dictionary
