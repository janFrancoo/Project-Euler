#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digitFifthPowers(int n, int e){
    int num, sum = 0, digitSum;

    for(int i=2; i<n; i++){
        digitSum = 0, num = i;
        while(num > 0){
            digitSum += pow(num % 10, e);
            num /= 10;
        }
        if(digitSum == i){
            sum += i;
        }
    }

    return sum;
}

int main()
{
    printf("%d", digitFifthPowers(350000, 5));

    return 0;
}
