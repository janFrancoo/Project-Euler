n1, n2, maxi, evenSum = 1, 2, 4000000, 0
while n1 < maxi or n2 < maxi:
    if n1 % 2 == 0:
        evenSum += n1
    if n2 % 2 == 0:
        evenSum += n2
    n1 += n2
    n2 += n1

print("Sum = ", evenSum)
