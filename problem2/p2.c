#include <stdio.h>
#include <stdlib.h>

int fibonacci_sum(int max){

    int num1 = 1, num2 = 2, evenSum = 0;
    while(num1 < max && num2 < max){
        if(num1 % 2 == 0){
            evenSum += num1;
        }
        if(num2 % 2 == 0){
            evenSum += num2;
        }
        num1 += num2;
        num2 += num1;
    }

    return evenSum;
}

int main()
{
    printf("Sum = %d", fibonacci_sum(4000000));
    return 0;
}
