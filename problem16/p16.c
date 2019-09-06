#include <stdio.h>
#include <stdlib.h>

int power_digit_sum(int num, int pow){

    int i, j, k, carry = 0, size = pow/2, sum = 0;
    int res[size];

    for(i=0; i<size; i++){
        res[i] = 0;
    }

    res[size - 1] = 2;

    for(i=1; i<pow; i++){
        for(j=size-1; j>0; j--){
            res[j] = (res[j] * 2) + carry;
            carry = 0;
            if(res[j] >= 10){
                carry = res[j] / 10;
                res[j] = res[j] % 10;
            }
        }
    }

    for(j=0; j<size; j++){
        sum+= res[j];
    }

    return sum;
    
}

int main()
{
    printf("%d", power_digit_sum(2, 1000));

    return 0;
}
