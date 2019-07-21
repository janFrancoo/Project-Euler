num = 1

while True:
    if num % 20 == 0 and num % 19 == 0 and num % 18 == 0 and num % 17 == 0 and \
            num % 16 == 0 and num % 14 == 0 and num % 13 == 0 and num % 11 == 0:
        print(num)
        break
    num += 1
