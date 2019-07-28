#include <stdio.h>
#include <stdlib.h>

int pythagorean_triplet(int n){
    int a, b, c;
    for(a=1; a<n/3; a++){
        for(b=a+1; b<n/2; b++){
            c = n - (a+b);
            if(a + b + c == n){
                if((a*a) + (b*b) == (c*c)){
                    printf("%d^2 + %d^2 = %d^2 and %d + %d + %d = %d\n", a, b, c, a, b, c, n);
                    return a*b*c;
                }
            }
        }
    }
}

int main()
{
    printf("%d\n", pythagorean_triplet(1000));

    return 0;
}
