import math


def sum_of_divisors(number):
    total = 1
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            total += i + (number//i)
    return total


def amicable_numbers(limit):
    result = 0
    number_list = [sum_of_divisors(i) for i in range(limit + 1)]
    for i in range(1, limit):
        if 0 < number_list[i] < limit:
            if i == number_list[number_list[i]]:
                if i != number_list[i]:
                    result += i + number_list[i]
                    number_list[number_list[i]] = 0
    return result


print(amicable_numbers(10000))
