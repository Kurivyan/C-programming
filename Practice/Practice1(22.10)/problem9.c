/*

Вывести первые n чисел фибоначи

*/
#include<stdio.h>

int main(){
    int fib_1 = 1, fib_2 = 1;
    int n;
    scanf("%d", &n);
    int temp_val;

    for(int i = 0; i < n; i++){
        printf("%d ", fib_1);
        temp_val = fib_2;
        fib_2 += fib_1;
        fib_1 = temp_val;
    }
    return 0;
}