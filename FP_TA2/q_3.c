//Write a C program to find the factorial of a number using recursion if n (whose factorial is to be found) is entered through the keyboard.

#include<stdio.h>

int fact(int num){
    if(num == 1){
        printf("%d = ", num);
        return 1;
    }

    printf("%d * ", num);
    return fact(num-1) * num;
}

int main(){
    int num;
    printf("Enter a number:- ");
    scanf("%d", &num);
    
    if(num < 0) printf("Enter a Positive number");
    else if(num == 0) printf("1");
    else printf("%d", fact(num));
    return 0;
}