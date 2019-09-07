import num2words


def number_letter_counts(start, end):
    letter_count = 0
    for i in range(start, end):
        num = i+1
        word_num = num2words.num2words(num).replace(' ', '').replace('-', '')
        letter_count += len(word_num)

    return letter_count


print(number_letter_counts(1, 1000))
