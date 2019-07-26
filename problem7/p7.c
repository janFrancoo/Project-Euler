#include <stdio.h>
#include <stdlib.h>

int is_prime(int number){
    int i;
    for(i=3; i*i<=number; i++){
        if(number % i == 0) return 0;
    }
    return 1;
}

int nth_prime(int nth){
    int i = 3, count = 1;
    while(count != nth){
        if(is_prime(i)) count += 1;
            if(count == nth) return i;
        i += 2;
    }
}

int main()
{
    printf("%d", nth_prime(10001));
    return 0;
}
