def get_fibonacci_number(index):
    f1 = f2 = 1
    for i in range(3, index + 1, 2):
        f1 += f2
        f2 += f1
    if index % 2 == 0:
        return f2
    return f1


def a_thousand_digit_fibonacci_number(contained_digit):
    i = 1
    compare = 10 ** (contained_digit - 1)
    while True:
        if get_fibonacci_number(i) > compare:
            return i
        i += 1


print(a_thousand_digit_fibonacci_number(1000))
