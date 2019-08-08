def chain_length(number, limit, chain):
    length = 1
    copyNum = number
    while number != 1:
        if number < limit:
            if chain[number] > 0:
                length += chain[number]
                break
        if number % 2 == 0:
            number = number // 2
        else:
            number = (number * 3) + 1
        length += 1
    chain[copyNum] = length
    return length


def find_longest_chain(limit):
    chain = [0] * limit
    max = 0
    for num in range(1, limit):
        length = chain_length(num, limit, chain)
        if length > max:
            max = length
            perfectNum = num
    return perfectNum


print(find_longest_chain(1000000))
