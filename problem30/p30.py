def digit_fifth_powers(limit, n):
    res = 0
    for i in range(2, limit+1):
        num = i
        digit_sum = 0
        while num > 0:
            digit_sum += pow(num % 10, n)
            num //= 10
        if digit_sum == i:
            res += i
    return res


print(digit_fifth_powers(350000, 5))
