// Write a C program to generate Fibonacci series using recursion if n (the number of elements in series) is entered through the keyboard.

#include<stdio.h>

int fab(int num) {
    if (num <= 1) return 1;
    return fab(num - 1) + fab(num - 2);
}

int main() {
    int num;
    printf("Enter a number:- ");
    scanf("%d", &num);
    if (num < 1) printf("Enter a positive number");
    else {
        for (int i = 0; i < num; i++) {
            printf("%d ", fab(i));
        }
    }
    return 0;
}