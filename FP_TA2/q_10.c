// Write a C program to compare, copy and concatenate two strings using functions

#include <stdio.h>
#include <string.h>

int compare(char *str1,char *str2) {
    int cmp = strcmp(str1, str2);
    return cmp;
}

void copy(char *dest,char *src) {
    strcpy(dest, src);
}

void concatenate(char *dest,char *src) {
    strcat(dest, src);
}

int main() {
    char str1[50], str2[50], result[100];
    
    printf("Enter the first string: ");
    scanf("%s", &str1);

    printf("Enter the second string: ");
    scanf("%s", &str2);

    !(compare(str1, str2))? printf("\nThe strings are equal\n"): printf("\nThe strings are not equal\n");

    copy(result, str1);
    printf("String after copying: %s\n", result);

    concatenate(result, str2);
    printf("String after concatenation: %s\n", result);

    return 0;
}