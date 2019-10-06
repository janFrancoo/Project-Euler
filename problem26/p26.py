def reciprocal_cycles(d):
    res = 0
    length = 0
    for i in range(1, d):
        remainders = [0] * d
        remainder = 1
        pos = 0
        while remainders[remainder] == 0 and remainder != 0:
            remainders[remainder] = pos
            remainder *= 10
            remainder %= i
            pos += 1
        if pos - remainders[remainder] > length:
            length = pos - remainders[remainder]
            res = i
    return res, length


print(reciprocal_cycles(1000)[0])
