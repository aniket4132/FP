// Write a C program to merge two .txt files using file handling

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE* fs, * ft;
    char source[67], target[67], str[80];

    printf("Enter source file: ");
    gets(source);

    fs = fopen(source, "r");

    if (fs == NULL) {
        printf("Unable to open source file");
        exit(0);
    }

    printf("Enter target file: ");
    gets(target);

    ft = fopen(target, "r");

    if (ft == NULL) {
        printf("Unable to open target file");
        fclose(fs);
        exit(0);
    }
    fclose(ft);
    ft = fopen(target, "a");

    while (fgets(str, sizeof(str), fs) != NULL) {
        fputs(str, ft);
    }
    fclose(fs);
    fclose(ft);

    return 0;
}