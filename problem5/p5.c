#include <stdio.h>
#include <stdlib.h>

int smallest_multiple(int n){
    int check[n+1], t1, t2;
    for(int i=1; i<=n; i++){
        check[i] = 1;
        if(i == 1 || i == 0){
            check[i] = 0;
        }
    }

    for(int i=n; i>1; i--){
        t1 = 0;
        t2 = 0;
        if(check[i] != 0){
            for(int j=i-1; j>1; j--){
                if(i % j == 0){
                    t2 = 1;
                    if(check[j] == 1){
                        t1 = 1;
                        check[j] = 0;
                    }
                }
            }
            if(t1 == 0 && t2 == 1){
                check[i] = 0;
            }
        }
    }

    int number = 1;
    while(1){
        t1 = 1;
        for(int i=1; i<=n; i++){
            if(check[i] == 1){
                if(number % i != 0){
                    t1 = 0;
                }
            }
        }
        if(t1 == 1){
            printf("%d", number);
            break;
        }
        number++;
    }
}

int main()
{

    smallest_multiple(20);

    /*int i = 1;
    while(1){
        if((i%20)==0 && (i%19)==0 && (i%18)==0 && (i%17==0) && (i % 16) == 0
                        && (i % 14) == 0 && (i % 13 == 0) && (i % 11 == 0)){
            printf("%d", i);
            break;
        }
        i++;
    }*/

    return 0;
}
