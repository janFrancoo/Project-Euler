i, num = 1, 600851475143
while i < num:
    i += 1
    if num % i == 0:
        num /= i

print("Largest prime factor = ", i)
