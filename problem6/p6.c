#include <stdio.h>
#include <stdlib.h>

int sum_square_difference(int n){

    long long count = 0;
    for(int i=1; i<=n; i++){
        count += i;
    }
    count *= count;
    for(int i=1; i<=n; i++){
        count -= (i * i);
    }
    printf("%ld", count);

}

int main()
{
    sum_square_difference(100);
    return 0;
}
