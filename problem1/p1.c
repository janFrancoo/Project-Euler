#include <stdio.h>
#include <stdlib.h>

int find_3_5(int max){
    int i, sum = 0;
    for(i=3; i<max; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}


int main() {
    printf("Sum = %d", find_3_5(1000));
    return 0;
}
