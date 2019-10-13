#include <stdio.h>
#include <stdlib.h>

int numberSpiralDiagonals(int n){
    int sum = 0, r, sq;
    for(int i=3; i<=n; i+=2){
        sq = i * i;
        sum += sq;
        r = i-1;
        for(int j=1; j<=3; j++){
            sum += sq - (r * j);
        }
    }
    return sum + 1;
}

int main()
{
    printf("%d", numberSpiralDiagonals(1001));
    return 0;
}
