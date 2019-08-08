#include <stdio.h>
#include <stdlib.h>

 float lattice_paths(int width, int height){
    int i, j = width;
    float result = 1;
    for(i=width+height; i>(width+height)-width; i--){
        result *= i;
        result /= j;
        j--;
    }
    while(j > 1){
        result /= j;
        j--;
    }
    return result;
}

int main()
{
    printf("%lld", (long long)lattice_paths(20, 20));
    return 0;
}
