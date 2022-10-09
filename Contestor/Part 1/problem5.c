/*
Two numbers are entered, you need to find if first number is multiple(кратно) to second. First number must be bigger than second.

Input:
4 2

Output:
yes

*/

#include<stdio.h>

int main(){
    int a, b;

    scanf("%i %i", &a, &b);

    if(a < b) {
        return 0;
    } else if(a % b == 0 && (a > b)){
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}