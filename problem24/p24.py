import math


def lexicographic_permutations(n, nth_num):
    result = []
    remaining = nth_num - 1
    numbers = [i for i in range(0, n+1)]
    for i in range(n + 1):
        index = remaining // math.factorial(n - i)
        result.append(numbers[index])
        remaining = remaining % math.factorial(n - i)
        numbers.remove(result[i])
    print(result)


lexicographic_permutations(9, 1000000)
