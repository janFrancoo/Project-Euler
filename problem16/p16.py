def power_digit_sum(num, power):
    return sum([int(i) for i in str(num**power)])


print(power_digit_sum(2, 1000))
