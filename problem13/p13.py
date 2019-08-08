def find_sum(fistNNumbers, path):
    with open(path, 'r') as file:
        sumOfNums = sum([int(line) for line in file.readlines()])
        print(str(sumOfNums)[:fistNNumbers])


find_sum(10, 'C:/Users/ErenS/Desktop/numbers.txt')
