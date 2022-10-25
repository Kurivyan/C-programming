/*

Выяснить является ли число n степенью двойки.

*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 2;
    do {
        if(i == n) {
            printf("Yes \n");
            return 0;
        }
        i *= 2;
    } while(i <= n);
    printf("No \n");
    return 0;
}