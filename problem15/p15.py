def lattice_paths(width, height):
    j = width
    result = 1
    for i in range(width+height, width+height-width, -1):
        result *= i
        result /= j
        j -= 1
    return result


print(lattice_paths(20, 20))
