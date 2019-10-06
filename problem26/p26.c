#include <stdio.h>

int reciprocalCycles(int d){
    int i, length = 0, remainder, pos, res;

    for(i=1; i<d; i++){
        int* remainders = calloc(sizeof(int), i);
        remainder = 1;
        pos = 0;
        while(remainders[remainder] == 0 && remainder != 0){
            remainders[remainder] = pos;
            remainder *= 10;
            remainder %= i;
            pos++;
        }
        if(pos - remainders[remainder] > length){
            length = pos - remainders[remainder];
            res = i;
        }
    }

    return res;
}

int main()
{
    printf("%d", reciprocalCycles(1000));

    return 0;
}
