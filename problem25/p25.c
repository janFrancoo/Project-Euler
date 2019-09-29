#include <stdio.h>
#include <stdlib.h>

int aThousandDigitFibonacciNumber(int containedDigit){
    int i = 1, n = 2;
    int* arr1 = calloc(containedDigit, sizeof(int));
    int* arr2 = calloc(containedDigit, sizeof(int));
    int* arr3 = calloc(containedDigit, sizeof(int));

    arr1[0] = 1;
    arr2[0] = 1;

    while(arr3[containedDigit - 1] == 0){
        for(i=0; i<containedDigit; i++){
            arr3[i] = arr1[i] + arr2[i];
        }
        for(i=0; i<containedDigit; i++){
            if(arr3[i] > 9){
                arr3[i+1] += arr3[i]/10;
                arr3[i] %= 10;
            }
        }
        for(i=0; i<containedDigit; i++){
            arr1[i] = arr2[i];
        }
        for(i=0; i<containedDigit; i++){
            arr2[i] = arr3[i];
        }
        n++;
    }

    return n;
}

int main()
{
    printf("%d", aThousandDigitFibonacciNumber(2));
    return 0;
}
