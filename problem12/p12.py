def divisor_count(num):
    count = 0
    for i in range(1, int(num ** (1/2)) + 1):
        if num % i == 0:
            count += 2
        if num == i*i:
            count -= 1
    return count


def find_triangle(limit):
    i = 1
    triangle = 0
    while True:
        triangle += i
        if divisor_count(triangle) > limit:
            break
        i += 1
    return triangle


print(find_triangle(500))
