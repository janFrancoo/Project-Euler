#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_palindrome(int number){
    int i = 0, res, digit, copyNum = number, newNum = 0, copyNum2 = number;
    while(copyNum > 0){
        copyNum /= 10;
        i++;
    }

    while(number > 0){
        res = (number / 10) * 10;
        digit = number - res;
        number /= 10;
        newNum += digit * (pow(10, i-1));
        i--;
    }

    if(newNum == copyNum2){
        return 1;
    }

    return 0;
}

int find_max_palindrome(int digit){
    int i, j, num, max = 0;
    for(i = pow(10, digit) - 1; i > pow(10, digit - 1); i--){
        for(j = pow(10, digit) - 1; j > pow(10, digit - 1); j--){
            num = i * j;
            if(num > max && is_palindrome(num)){
                max = num;
            }
        }
    }

    return max;
}

int main()
{
    printf("%d", find_max_palindrome(3));
    return 0;
}
