#!/usr/bin/python3
def no_c(my_string):
    if my_string[:]:
        shee_string = my_string.translate({ord("c"): None})
        pure_string = shee_string.translate({ord("C"): None})
        return (pure_string)
    return (my_string)
