def digit_factorials():
    total_sum = 0
    factorials = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880]
    for i in range(3, 2540162):
        digit_fact_sum = 0
        for digit in str(i):
            digit_fact_sum += factorials[int(digit)]
        if digit_fact_sum == i:
            total_sum += i
    print(total_sum)


digit_factorials()
