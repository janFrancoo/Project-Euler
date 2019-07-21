def sum_square_difference(n):
    c = 0
    for i in range(1, n+1):
        c += i
    c *= c
    for i in range(1, n+1):
        c -= i ** 2
    print(c)


sum_square_difference(100)
