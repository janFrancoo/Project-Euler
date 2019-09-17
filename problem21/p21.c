#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_of_divisors(int number){
    int i, sum = 1;
    for(i=2; i<=sqrt(number); i++){
        if(number % i == 0){
            sum += i + (number/i);
        }
    }
    return sum;
}

int amicable_numbers(int limit){
    int i, j, sum = 0;
    int* numberList = calloc(limit, sizeof(int));
    for(i=1; i<limit; i++){
        numberList[i] = sum_of_divisors(i);
    }
    for(i=1; i<limit; i++){
        if(numberList[i] > 0 && numberList[i] < limit){
            if(i == numberList[numberList[i]]){
                if(i != numberList[i]){
                    sum += i + numberList[i];
                    numberList[numberList[i]] = 0;
                }
            }
        }
    }

    return sum;
}

int main()
{
    printf("%d", amicable_numbers(10000));

    return 0;
}
