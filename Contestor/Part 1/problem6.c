/*
Input two numbers and show one of the following symbols: '>', '<' or '='.
'>' if first number is bigger, '<' if vice versa, and '=' if they are equal.

Input:
3 4

Output:
<

*/

#include<stdio.h>

int main(){
    int a, b;

    scanf("%i %i", &a, &b);

    if(a > b) {
        printf(">");
    } else if(a == b){
        printf("=");
    } else {
        printf("<");
    }
    
    return 0;
}