#!/usr/bin/python3
def roman_to_int(roman_string):
    if roman_string is None or type(roman_string) != str:
        return 0
    rmn = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    numbers = [rmn[x] for x in roman_string] + [0]
    per = 0

    for y in range(len(numbers) - 1):
        if numbers[y] >= numbers[y + 1]:
            per += numbers[y]
        else:
            per -= numbers[y]
    return per
