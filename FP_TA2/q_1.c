// Write a C program to check if a number entered through the keyboard is a palindrome or not.

#include<stdio.h>
#include<string.h>

int palindrome(char num[20]){
    int num_len = strlen(num);

    for(int i=0; i<(num_len/2); i++){
        if(num[i] != num[num_len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char num[20];
    printf("Enter a number: ");
    scanf("%s", num);

    palindrome(num)? printf("It is a palindrome number") :printf("It is not a palindrome number");
    return 0;
}