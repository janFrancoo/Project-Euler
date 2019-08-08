#include <stdio.h>
#include <stdlib.h>

int chain_length(long long number, int* chain, int limit){
    int length = 1, copyNumber = number;
    while(number != 1){
        if(number < limit){
            if(chain[number] != 0){
            length += chain[number];
            break;
            }
        }
        if(number % 2 == 0)
            number /= 2;
        else
            number = (number * 3) + 1;
        length++;
    }
    chain[copyNumber] = length;
    return length;
}

int find_longest_chain(int limit){
    int* chain = calloc(limit, sizeof(int));
    int i, max = 0, length, initialNum = 0;
    for(i=1; i<limit; i++){
        length = chain_length(i, chain, limit);
        if(length > max){
            max = length;
            initialNum = i;
        }
    }

    return initialNum;
}

int main()
{
    printf("%d", find_longest_chain(1000000));

    return 0;
}
