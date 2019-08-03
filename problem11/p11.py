def read_grid(height, width, path):
    grid = [[0 for i in range(width)] for j in range(height)]

    with open(path) as file:
        i = 0
        j = 0
        for line in file:
            nums = line.split(" ")
            nums[-1] = nums[-1].rstrip('\n')
            for num in nums:
                grid[i][j] = int(num)
                j += 1
                if j == width:
                    j = 0
                    i += 1

    return grid


def find_max(grid, width, height, length):
    max = 0
    for i in range(height):
        for j in range(width):
            mult = 1
            for k in range(length):
                if j > width - length:
                    break
                mult *= grid[i][j+k]
            if mult > max:
                max = mult
            mult = 1
            for k in range(length):
                if i > height - length:
                    break
                mult *= grid[i+k][j]
            if mult > max:
                max = mult
            mult = 1
            for k in range(length):
                if i > height - length or j > width - length:
                    break
                mult *= grid[i+k][j+k]
            if mult > max:
                max = mult
            mult = 1
            for k in range(length):
                if j < length - 1 or i > width - length:
                    break
                mult *= grid[i+k][j-k]
            if mult > max:
                max = mult
    return max


width = 20
height = 20
path = 'C:/Users/ErenS/Desktop/grid.txt'
grid = read_grid(width, height, path)
print(find_max(grid, 20, 20, 4))
