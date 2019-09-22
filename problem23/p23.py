def sum_of_proper_divisors(number):
    result = 1
    for i in range(2, int(1 + (number ** 0.5))):
        if number % i == 0:
            if (number // i) == i:
                result += i
            else:
                result += i + (number // i)
    return result


def non_abundant_sums():
    limit = 28123
    abundant_list = [i for i in range(1, limit) if i < sum_of_proper_divisors(i)]
    al_len = len(abundant_list)
    can_be_written_as_abundant = set(abundant_list[i] + abundant_list[j] for i in range(al_len)
                                     for j in range(al_len))
    can_not_be_written_as_abundant = [i for i in range(1, limit) if i not in can_be_written_as_abundant]
    return sum(can_not_be_written_as_abundant)


print(non_abundant_sums())
