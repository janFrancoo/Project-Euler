def is_prime(num):
    for i in range(2, int(num ** 1/2) + 1):
        if num % i == 0:
            return 0
    return 1


def quadratic_primes():
    max_count = 0
    max_quad = 0
    for a in range(-999, 1000, 2):
        for b in range(-1000, 1001):
            n = 0
            while is_prime(abs((n*n) + (a*n) + b)):
                n += 1
            if n > max_count:
                max_count = n
                max_quad = a * b
    return max_quad


print(quadratic_primes())
