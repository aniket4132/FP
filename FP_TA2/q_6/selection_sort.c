// Write a C programs and their Algorithms to arrange an array of 10 numbers in descending order using insertion sort, bubble sort and selection sort. Assume 10 random numbers

#include<stdio.h>

int main(){
    int num[10] = {7, 4, 8, 3, 1, 12, 23, 43, 45, 9}, size=10, temp;

    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(num[j]>num[min]){ // FOr accending and desending change this sign
                min =j;
            }
        }
        if(min != i){
            temp = num[i];
            num[i] = num[min];
            num[min] = temp;
        }
    }

    for(int i=0; i<size; i++){
        printf(" %d ", num[i]);
    }
    return 0;
}