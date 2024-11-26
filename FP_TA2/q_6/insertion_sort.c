// Write a C programs and their Algorithms to arrange an array of 10 numbers in descending order using insertion sort, bubble sort and selection sort. Assume 10 random numbers

#include<stdio.h>

int main(){
   int num[10] = {7, 4, 8, 3, 1, 12, 23, 43, 45, 9}, size=10, temp;

    printf("\n");
    for(int i=0; i<size; i++){
        int j = i;
        while(j>0 && num[j-1] < num[j]){
            temp = num[j];
            num[j] = num[j-1];
            num[j-1] = temp;
            j--;
        }
    }

    for(int i=0; i<size; i++){
        printf(" %d ", num[i]);
    }
    return 0;
}