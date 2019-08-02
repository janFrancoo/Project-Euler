#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
    int i;
    for(i=2; i*i<=num; i++){
        if(num % i == 0){
            return 1;
        }
    }
    return 0;
}

long long summation_of_primes(int n){
    int i;
    long long count = 2;
    for(i=3; i<n; i+=2){
        if(!is_prime(i))
            count += i;
    }
    return count;
}

int main()
{
    printf("%lld\n", summation_of_primes(2000000));
    return 0;
}
