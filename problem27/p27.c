#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int quadraticPrimes(){
    int a, b, n, maxCount = 0, maxQuadratic = 0, res;
    for(a=-999; a<=999; a+=2){
        for(b=-1000; b<=1000; b++){
            n = 0;
            while(isPrime(abs((n*n) + (a*n) + b))){
                n++;
            }
            if(n > maxCount){
                maxCount = n;
                maxQuadratic = a*b;
            }
        }
    }

    return maxQuadratic;
}

int main()
{
    printf("%d", quadraticPrimes());
    return 0;
}
