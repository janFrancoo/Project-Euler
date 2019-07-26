def is_prime(number):
    i = 3
    while i ** 2 <= number:
        if number % i == 0:
            return 0
        i += 1
    return 1


def nth_prime(nth):
    i = 3
    count = 1
    while count != nth:
        if is_prime(i):
            count += 1
            if count == nth:
                return i
        i += 2


print(nth_prime(10001))
