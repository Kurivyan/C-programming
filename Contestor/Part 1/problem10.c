/*
Input two real numbers (x and y) and calculate the following mathematical expression : 

(x - 2y)x
----------
    -2y

Input:
1 1.6

Output:
0.6875

*/

#include<stdio.h>

int main(){
    float x, y;

    scanf("%f %f", &x, &y);

    printf("%f", ((x - 2 * y) * x) / ((-2) * y));
    
    return 0;
}