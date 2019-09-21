def names_scores(file_name):
    with open(file_name) as file:
        content = file.read()

    result = 0
    names = content.split(",")
    names = [i.strip('"') for i in names]
    names.sort()

    for index, name in enumerate(names):
        for char in name:
            result += (ord(char) - 64) * (index + 1)

    return result


print(names_scores('p22_names.txt'))
