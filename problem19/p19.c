#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year){
    if(year % 4 == 0){
        if(year % 1000 == 0){
            if(year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int days_of_month(int month, int year){
    int days[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month != 2)
        return days[month];
    else{
        if(is_leap_year(year))
            return 29;
        else{
            return 28;
        }
    }
}

int counting_sundays(int from, int to){
    int i, j, currentDay = 1, count = 0;

    for(i=1900; i<=to; i++){
        for(j=1; j<=12; j++){
            if(currentDay == 7){
                if(i >= from)
                    count += 1;
            }
            switch(days_of_month(j, i)){
                case 29:
                    currentDay += 1;
                    break;
                case 30:
                    currentDay += 2;
                    break;
                case 31:
                    currentDay += 3;
                    break;
            }
            if(currentDay > 7){
                currentDay = currentDay % 7;
            }
        }
    }

    return count;
}

int main()
{
    printf("Result is %d", counting_sundays(1901, 2000));

    return 0;
}
