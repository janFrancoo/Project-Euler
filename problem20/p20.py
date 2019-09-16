from functools import reduce


def factorial_digit_sum(n):
    fact = 1
    for i in range(2, n+1):
        fact *= i
    result = [int(i) for i in str(fact)]
    return reduce(lambda x, y: x + y, result)


print(factorial_digit_sum(100))
