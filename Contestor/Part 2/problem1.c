/*
Given three real numbers x, y, z. Output "YES", if x<y<z. Output NO, otherwise.

Example:
Input:
3.1 4.1 5.1

Output
YES

*/
#include<stdio.h>

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    if(x < y < z) {
        printf("Yes");
    } else {
        printf("No");
    } 
    return 0;
}