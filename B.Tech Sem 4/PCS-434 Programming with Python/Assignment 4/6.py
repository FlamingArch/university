from functools import reduce
def zero_sum(*args):
    return reduce(lambda x,y: x+y, *args) == 0

print(zero_sum([int(input("> ")) for i in range(5)]))
