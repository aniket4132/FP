//Write a C program to find the LCM and GCD of two numbers entered through the keyboard.

#include<stdio.h>

int GCD(int a, int b) {
    int fact_size = 0, exit_val = 0, value, fact[20];
    for (int i = 1; i <= a; i++) {
        if (!(a % i)) {
            fact[fact_size] = i;
            fact_size++;
        }
    }
    for (int j = b; j >= 1; j--) {
        if (!(b % j)) {
            for (int i = 0; i < fact_size + 1; i++) {
                if (fact[i] == j) {
                    value = fact[i];
                    exit_val = 1;
                    break;
                }
            }
        }
        if (exit_val) break;
    }
    return value;
}

int main() {
    int a, b, gcd, lcm;
    printf("Enter two number:- \n");
    scanf("%d %d", &a, &b);

    gcd = GCD(a,b);
    lcm = (a*b)/gcd;

    printf("\nGCD = %d\nLCM = %d", gcd, lcm);

    return 0;
}