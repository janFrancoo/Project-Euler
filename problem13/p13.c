#include <stdio.h>
#include <stdlib.h>

int find_sum(int first_n_digit, int n_numbers, int n_digit, char* path){
    char c;
    int i = 0, j = 0;
    char* num = malloc(sizeof(char)*n_digit);
    char** nums = malloc(sizeof(char*)*n_numbers);

    for(i=0; i<n_numbers; i++){
        nums[i] = malloc(sizeof(char*));
    }

    FILE* fp = fopen(path, "r+");

    if(fp == NULL){
        printf("Error while opening the file\n");
        return 0;
    }

    i = 0;

    while((c = fgetc(fp)) != EOF){
        if(c != '\n'){
            num[j] = c;
            j++;
        }
        if(j == n_digit){
            num[j] = '\0';
            nums[i] = num;
            num = malloc(sizeof(char)*n_digit);
            i++;
            j=0;
        }
    }

    fclose(fp);

    int digit = 0, digitSum = 0, carry = 0;
    int* sum = calloc(n_digit * 2, sizeof(int));

    for(i=n_digit-1; i>=0; i--){
        for(j=0; j<n_numbers; j++){
            digitSum += (nums[j][i] - '0');
        }
        sum[digit] = (digitSum + carry) % 10;
        carry = (digitSum +  carry) / 10;
        digitSum = 0;
        digit++;
    }

    while(carry != 0){
        sum[digit] = carry % 10;
		carry /= 10;
		digit++;
    }

    for(i=digit - 1; i>=digit - first_n_digit; i--){
        printf("%d", sum[i]);
    }
}


int main()
{
    find_sum(10, 100, 50, "C:/Users/ErenS/Desktop/numbers.txt");

    return 0;
}
