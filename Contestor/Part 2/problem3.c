/*
Given three real numbers x, y, z. Output the maximum and the minimum values of them. First output the minimum, then the maximum value

Example:
Input:
3.1 4.1 5.1

Output
5.1 3.1

Example:
Input:
5.2 4.1 1.0

Output
5.2 1.0
*/

#include<stdio.h>

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    
    if (x > y && x > z) {
        if (y > z) {
            printf("%f %f", x, z);
        } else {
            printf("%f %f", x, y);
        }
    }
    if (y > x && y > z) {
        if (x > z) {
            printf("%f %f", y, z);
        } else {
            printf("%f %f", y, x);
        }
    }
    if (z > y && z > x) {
        if (x > y) {
            printf("%f %f", z, y);
        } else {
            printf("%f %f", z, x);
        }
    }
    return 0;
}