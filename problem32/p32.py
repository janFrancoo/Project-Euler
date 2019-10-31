def is_pandigital(n1, n2):
    product = n1 * n2
    
    if len(str(product)) != 4:
        return False
    
    nine_digit_num = str(n1) + str(n2) + str(product)

    for i in range(1, 10):
        if str(i) not in nine_digit_num:
            return False
    return True


def pandigital_products():
    nums = set()
    
    for i in range(1, 10):
        for j in range(1000, 10000):
            if is_pandigital(i, j):
                nums.add(i*j)

    for i in range(10, 100):
        for j in range(100, 1000):
            if is_pandigital(i, j):
                nums.add(i * j)

    return sum(nums)


print(pandigital_products())
