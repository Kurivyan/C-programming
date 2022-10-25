/*

    Найти разницу между максимаьной и минимальной цифрами числа n

*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int max = 0, min = 10;
    int single_val = n;

    do {
        single_val = n % 10;
        printf("%d \n", single_val);
        if (max < single_val)
            max = single_val;
        if (min > single_val)
            min = single_val;
        n = n / 10;
        printf("%d \n", n);
    }while(n >= 1);

    printf("%d", max - min);
    return 0;
}