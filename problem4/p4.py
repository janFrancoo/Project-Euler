def is_palindrome(number):
    number = str(number)
    if number == number[::-1]:
        return True


def find_max_palindrome(digit):
    maxi = 0
    for i in range((10 ** digit) - 1, 0, -1):
        for j in range((10 ** digit) - 1, 0, -1):
            num = i * j
            if num > maxi and is_palindrome(num):
                maxi = num
    return maxi


print(find_max_palindrome(3))
