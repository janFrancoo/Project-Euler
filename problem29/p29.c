#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

int almostEq(double a, double b){
    return (fabs(a - b) < (0.0000001 * fabs(a + b)));
}

int distinctPowers(int a, int b){
    int count = 0, add;
    double mult, arr[(a-2)*(b-2)];

    for(int i=2; i<=a; i++){
        for(int j=2; j<=b; j++){
            mult = pow(i, j);
            add = 1;
            for(int k=0; k<count; k++){
                if(almostEq(arr[k], mult))
                    add = 0;
            }
            if(add){
                arr[count] = mult;
                count++;
            }
        }
    }

    return count;
}

int main()
{
    printf("%d", distinctPowers(100, 100));
    return 0;
}
