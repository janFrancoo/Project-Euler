def sieve(limit):
    count = 0
    array = [True]*limit
    array[0] = False
    array[1] = False
    for i in range(2, int(limit ** (1/2))):
        if array[i]:
            for j in range(i**2, limit, i):
                array[j] = False

    for i in range(0, limit):
        if array[i]:
            count += i

    return count


print(sieve(2000000))
