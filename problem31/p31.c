#include <stdio.h>
#include <stdlib.h>

int coinSums(int target, int coins[], int n){
    int* possibilities = calloc(target + 1, sizeof(int));
    possibilities[0] = 1;

    for(int i=0; i<n; i++){
        for(int j=coins[i]; j<=target; j++){
            possibilities[j] += possibilities[j - coins[i]];
        }
    }

    return possibilities[target];
}

int main()
{
    int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};
    printf("%d", coinSums(200, coins, 8));

    return 0;
}
