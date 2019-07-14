#include <stdio.h>
#include <stdlib.h>

int find_largest_prime_factor(long long num){

    int i = 1;
    while(i < num){
        i++;
        if(num % i == 0){
            num /= i;
        }
    }
    return i;

}

int main()
{
    printf("Largest prime factor = %d", find_largest_prime_factor(600851475143));
    return 0;
}
