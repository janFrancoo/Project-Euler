#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int fileSize, i = 0, j, sum = 0, N = 5163;
    char *content, *split, *names[5163], *temp;
    FILE *fp = fopen("C:/Users/ErenS/Desktop/names.txt", "rb");

    if (fp == NULL) {
        printf("Error while opening the file!\n");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    content = malloc(fileSize + 1);
    fread(content, 1, fileSize, fp);
    fclose(fp);

    split = strtok(content, ",");

    while (split != NULL) {
        names[i++] = split;
        split = strtok (NULL, ",");
    }

    for (i=0; i<N-1; i++) {
        for (j=0; j<N-1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    for (i=0; i<5163; i++) {
        for (j=0; j<strlen(names[i]); j++) {
            if (names[i][j] != '"'){
                sum += ((int)names[i][j] - 64) * (i + 1);
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
