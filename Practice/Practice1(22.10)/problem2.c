/*

Найти близжайшее к числу n полный квадрат, не превосходящий его.

*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int final;
    int i = 1;

    while(i * i < n){
        final = i * i;
        i++;
    }

    printf("%d", final);
    return 0;
}