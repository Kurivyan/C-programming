/*
Given 3 positive real numbers x, y, z. Output "YES" if it is possible to construct a triangle with side lengths x, y, z. Output "NO" otherwise.

Example:
Input:
3 4 5

Output
YES

Example:
Input:
1 4 5

Output
NO 
*/

#include<stdio.h>

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    if(x + y > z && x + z > y && y + z > x){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}