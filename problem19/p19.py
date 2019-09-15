def is_leap_year(year):
    if year % 4 == 0:
        if year % 1000 == 0:
            if year % 400 == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False


def days_of_month(month, year):
    days = [0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month != 2:
        return days[month]
    else:
        if is_leap_year(year):
            return 29
        else:
            return 28


def counting_sundays(from_year, to_year):
    current_day = 1
    count = 0

    for i in range(1900, to_year + 1):
        for j in range(1, 13):
            if current_day == 7:
                if i >= from_year:
                    count += 1
            days = days_of_month(j, i)
            if days == 29:
                current_day += 1
            if days == 30:
                current_day += 2
            if days == 31:
                current_day += 3
            if current_day > 7:
                current_day %= 7

    return count


print("Result is {}".format(counting_sundays(1901, 2000)))
