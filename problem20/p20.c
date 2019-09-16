#include <stdio.h>
#include <stdlib.h>

int sum_of_array(int* arr, int size){
    int i, sum = 0;
    for(i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int factorial_digit_sum(int n){
    int i, j, k, size = n * 2;
    int* result = calloc(size, sizeof(int));
    result[size-1] = 1;

    for(i=2; i<=n; i++){
        for(j=size-1; j>=0; j--){
            result[j] *= i;
        }
        for(k=size-1; k>=0; k--){
            if(result[k] > 10){
                result[k-1] += result[k] / 10;
                result[k] %= 10;
            }
        }
    }

    return sum_of_array(result, size);
}

int main()
{
    printf("%d", factorial_digit_sum(100));

    return 0;
}
