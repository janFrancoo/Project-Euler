#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToStr(int num){
    char* str = malloc(sizeof(char)*9);
    sprintf(str, "%d", num);
    return str;
}

int length(int num){
    return strlen(intToStr(num));
}

int isPandigital(int n1, int n2){
    int l1, l2, lp, product, pass = 0;
    char digits[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    product = n1 * n2;
    lp = length(product);

    if(lp != 4){
        return 0;
    }

    l1 = length(n1);
    l2 = length(n2);

    char *nineDigitNumber = malloc(sizeof(char)*9);
    snprintf(nineDigitNumber, sizeof(char)*(l1+l2+lp), "%s%s%s", intToStr(n1), intToStr(n2), intToStr(product));

    for(int i=0; i<9; i++){
        pass = 0;
        for(int j=0; j<9; j++){
            if(nineDigitNumber[j] == digits[i])
                pass = 1;
        }
        if(!pass)
            return 0;
    }

    return 1;
}

int isInTheArr(int *arr, int n, int num){
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return 1;
        }
    }
    return 0;
}

int pandigitalProducts(){
    int sum = 0, top = 0;
    int* pandigitalNums = calloc(100, sizeof(int));

    for(int i=1; i<=9; i++){
        for(int j=1000; j<=9999; j++){
            if(isPandigital(i, j)){
                if(!isInTheArr(pandigitalNums, top, i*j))
                    pandigitalNums[top++] = i*j;
            }
        }
    }

    for(int i=10; i<=99; i++){
        for(int j=100; j<=999; j++){
            if(isPandigital(i, j)){
                if(!isInTheArr(pandigitalNums, top, i*j))
                    pandigitalNums[top++] = i*j;
            }
        }
    }

    for(int i=0; i<top; i++)
        sum+= pandigitalNums[i];

    return sum;
}

int main()
{
    printf("%d", pandigitalProducts());

    return 0;
}
