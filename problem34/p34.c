#include <stdio.h>
#include <stdlib.h>

void digitFactorials(){
    int totalSum = 0;
    int factorials[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    for(int i=3; i<2540161; i++){
        int size = ceil(log10(i)) + 1, sum = 0;
        char str[size];
        sprintf(str, "%d", i);
        for(int j=0; j<size-1; j++){
            sum += factorials[str[j] - '0'];
        }
        if(sum == i){
            totalSum += i;
        }
    }

    printf("%d", totalSum);
}

int main()
{
    digitFactorials();
    return 0;
}
