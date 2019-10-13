def number_spiral_diagonals(n):
    res = 0
    for i in range(3, n+1, 2):
        sq = i ** 2
        res += sq
        r = i-1
        for j in range(1, 4):
            res += sq - (r * j)
    return res + 1


print(number_spiral_diagonals(1001))
