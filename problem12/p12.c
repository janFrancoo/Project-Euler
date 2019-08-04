#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int divisor_count(int number){
    int i = 1, count = 0;

    for(i=1; i<=sqrt(number); i++){
        if(number % i == 0)
            count += 2;
        if(number == i * i)
            count--;
    }

    return count;
}

int find_triangle_num(int limit){

    int i, count = 0;

    while(1){
        count += i;
        i++;
        if(divisor_count(count) > limit)
            break;
    }

    return count;

}

int main()
{

    printf("%d\n", find_triangle_num(500));

    return 0;
}
