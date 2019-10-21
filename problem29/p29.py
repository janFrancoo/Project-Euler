def distinct_power(a, b):
    arr = set()
    for i in range(2, a+1):
        for j in range(2, b+1):
            arr.add(pow(i, j))
    return len(arr)


print(distinct_power(100, 100))
