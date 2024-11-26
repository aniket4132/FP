//Write a C program to find the area and volume of a cylinder using call by reference method in function. 

#include<stdio.h>
#define pi 3.14

void r_area(float *area, float r, float h){
    *area = 2*pi*r*(r+h);
}
void r_volume(float *volume, float r, float h){
    *volume  = pi*r*r*h;
}

int main(){
    float area, volume, r, h;
    printf("Enter the Cylinder Radius and Volume\n");
    scanf("%f %f", &r, &h);

    r_area(&area, r, h);
    r_volume(&volume, r, h);

    printf("\nArea = %.2f\nVolume = %.2f\n", area, volume);
    return 0;
}