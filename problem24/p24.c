#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    int i, res = 1;
    for(i=num; i>0; i--){
        res *= i;
    }
    return res;
}

void printArray(int array[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d", array[i]);
    }
}

int* deleteElement(int* array, int size, int willBeDeleted){
    int i, j = 0;
    int* newArray = malloc(sizeof(int)*(size-1));
    for(i=0; i<size-1; i++){
        if(array[j] != willBeDeleted){
            newArray[i] = array[j];
        }
        else{
            newArray[i] = array[j+1];
            j++;
        }
        j++;
    }
    return newArray;
}

void lexicographicPermutations(int range, int nthNum){
    int i, remaining = nthNum - 1, size = range + 1;
    int* numbers = malloc(sizeof(int)*size);
    int* result = malloc(sizeof(int)*size);
    for(i=0; i<=range; i++){
        numbers[i] = i;
    }
    for(i=0; i<=range; i++){
        result[i] = numbers[remaining / factorial(range-i)];
        remaining = remaining % factorial(range-i);
        numbers = deleteElement(numbers, size, result[i]);
        size--;
    }
    printArray(result, range + 1);
}

int main()
{
    lexicographicPermutations(9, 1000000);
    return 0;
}
