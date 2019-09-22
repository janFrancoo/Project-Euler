#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_of_proper_divisors(int number){
    int i, sum = 1;
    for(i=2; i<=sqrt(number); i++){
        if(number % i == 0){
            if((number / i) == i){
                sum += i;
            }
            else {
                sum += i + (number / i);
            }
        }
    }
    return sum;
}

int non_abundant_sums(){
    int i, j = 0, k = 0, size = 1000, sum = 0, limit = 28123;
    int *abundants = malloc(sizeof(int)*size);
    int *canBeWrittenAsAbundant = calloc(limit+1, sizeof(int));

    for(i=1; i<=limit; i++){
        if(i < sum_of_proper_divisors(i)){
            abundants[j] = i;
            j++;
        }
        if(j == size){
            size += 100;
            abundants = realloc(abundants, sizeof(int)*size);
        }
    }

    for(i=0; i<size; i++){
        for(j=i; j<size; j++){
            if((abundants[i] + abundants[j]) <= limit){
                canBeWrittenAsAbundant[abundants[i] + abundants[j]] = 1;
            } else {
                break;
            }
        }
    }

    for(i=0; i<limit; i++){
        if(canBeWrittenAsAbundant[i] == 0){
            sum += i;
        }
    }

    return sum;
}

int main()
{
    printf("%d", non_abundant_sums());

    return 0;
}
