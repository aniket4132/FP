// Write a C program to find and print the count of all even numbers present in an ARRAY of 10 numbers. 

#include<stdio.h>

int main(){
    int num[10], even_len=0;

    printf("Enter 10 element\n");

    for(int i=0; i<10; i++){
        printf("Enter the element %d:- ", i+1);
        scanf("%d", &num[i]);
        if(!(num[i]%2)) even_len++;
    }

    printf("\nNumber of Even element in array:- %d", even_len);
    return 0;
}