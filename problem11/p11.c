#include <stdio.h>
#include <stdlib.h>

int width = 20, height = 20;

int** read_grid(int width, int height, char path[]){
    char s[2];
    int i = 0, j = 0;
    FILE* fp = fopen(path, "r");
    int** grid = malloc(sizeof(int*) * height);

    if(fp == NULL){
        printf("Error while opening the file\n");
        return 0;
    }

    for(i=0; i<height; i++){
        grid[i] = calloc(sizeof(int), width);
    }

    i = 0, j = 0;
    while(fscanf(fp, "%s", s) != EOF){
        grid[i][j] = atoi(s);
        j++;
        if(j == 20){
            j = 0;
            i++;
        }
    }

    fclose(fp);

    return grid;
}

int find_max(int **grid, int width, int height, int length){

    int i, j, k, mult = 1, max = 0;

    for(i=0; i<height; i++){
        for(j=0; j<width; j++){
            for(k=0; k<length; k++){
                if(j > width - length)
                    break;
                mult *= grid[i][j+k];
            }
            if(mult > max)
                max = mult;
            mult = 1;
            for(k=0; k<length; k++){
                if(i > width - length)
                    break;
                mult *= grid[i+k][j];
            }
            if(mult > max)
                max = mult;
            mult = 1;
            for(k=0; k<length; k++){
                if(j > width - length || i > height - length)
                    break;
                mult *= grid[i+k][j+k];
            }
            if(mult > max)
                max = mult;
            mult = 1;
            for(k=0; k<length; k++){
                if(j < length - 1 || i > heigth - length)
                    break;
                mult *= grid[i+k][j-k];
            }
            if(mult > max)
                max = mult;
            mult = 1;
        }
    }

    return max;

}

int main()
{
    char* path = "C:/Users/ErenS/Desktop/grid.txt";
    int** grid = read_grid(width, height, path);
    int i, j, num;

    for(i=0; i<heigth; i++){
        for(j=0; j<width; j++){
            num = grid[i][j];
            if(num < 10)
                printf("0%d ", num);
            else
                printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    printf("\n%d\n", find_max(grid, width, heigth));

    return 0;
}
