def coin_sums(target, coins):
    possibilities = [0] * (target + 1)
    possibilities[0] = 1
    for i in range(len(coins)):
        for j in range(coins[i], target + 1):
            possibilities[j] += possibilities[j - coins[i]]
    return possibilities[target]


coins_set = (1, 2, 5, 10, 20, 50, 100, 200)
print(coin_sums(200, coins_set))
