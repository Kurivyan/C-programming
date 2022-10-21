/*
Given real numbers a,b,c. Double each number if the following inequality holds: а<=b<=с. Change every number to it’s absolute(модуль) value, otherwise. For each test, output a,b,c.

Example:
Input:
3.1 4.1 5.1

Output
6.2
8.2
10.2

Example:
Input:
-5.2 4.1 -1.0

Output
5.2 4.1 1.0
*/
#include<stdio.h>

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    if(x <= y && y <= z) {
        x *= 2; y *= 2; z *= 2; 
    } else {
        if(x < 0)
            x *= -1.;
        if(y < 0)
            y *= -1.;
        if(z < 0)
            z *= -1.;   
    }

    printf("%f %f %f", x, y, z);
    return 0;
}