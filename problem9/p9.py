def pythagorean_triplet(n):
    for a in range(1, int(n/3)):
        for b in range(a+1, int(n/2)):
            c = int(n) - (a+b)
            if a + b + c == 1000:
                if a**2 + b**2 == c**2:
                    print(a, "+", b, "=", c, "and", a, "^2 +", b, "^2 =", c, "^2")
                    return a*b*c


print(pythagorean_triplet(1000))
