def digit_cancelling_fractions():
    res = 1
    for i in range(10, 101):
        for j in range(i+1, 101):
            if i % 10 == j // 10 and j % 10 != 0:
                if i / j == (i // 10)/(j % 10):
                    res *= i / j
    print(res)


digit_cancelling_fractions()
