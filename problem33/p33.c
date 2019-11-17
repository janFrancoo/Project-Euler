#include <stdio.h>
#include <stdlib.h>

void digitCancellingFractions(){
    float mult = 1.0;
    for(float i=10.0; i<100; i++){
        for(float j=i+1; j<100; j++){
            if((int)i % 10 == (int)j / 10){
                if(i / j == (float)((int)i/10) / ((int)j % 10)){
                    mult *= i/j;
                }
            }
        }
    }

    printf("%f", mult);
}

int main()
{
    digitCancellingFractions();
    return 0;
}
