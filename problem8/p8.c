#include <stdio.h>
#include <stdlib.h>

void largest_product(int adj){
    int n = 0, c, i, j, offset;
    long long mult = 1, max = 0;
    char *digit1000 = malloc(sizeof(char)*1000);
    FILE *fp = fopen("C:/Users/ErenS/Desktop/1000digit.txt", "r");

    if(fp == NULL){
        printf("Error! File could not found!\n");
        return -1;
    }

    while((c = fgetc(fp)) != EOF){
        if(c != '\n') digit1000[n++] = (char)c;
    }

    fp.close();

    digit1000[n] = '\0';
    printf("%s\n", digit1000);

    for(i=0; i<1000; i++){
        mult = 1;
        for(j=i; j<i+adj; j++){
            mult *= (digit1000[j] - '0');
            if(mult == 0) break;
        }
        if(mult > max){
            max = mult;
            offset = i;
        }
    }

    printf("Max = %lld\nOffset = %d\n", max, offset);

    for(i=offset; i<offset+adj; i++){
        if(i != offset + adj - 1) printf("%d x ", digit1000[i] - '0');
        else    printf("%d", digit1000[i] - '0');
    }

    printf(" = %lld\n", max);
}

int main()
{
    largest_product(13);

    return 0;
}
