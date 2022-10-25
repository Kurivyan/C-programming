/*

Вводятся n чисел, вычислите сумму всех четных элементов и произведение всех нечетных

*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int number;
    int sum = 0;
    int prod = 1;
    for(int i = 0; i < n; i++){
        scanf("%d", &number);
        if(number % 2 == 0) {
            sum += number;
        }
        if(number % 2 != 0) {
            prod *= number;
        }
            
    }
    printf("Sum even : %d | Prod odd : %d", sum, prod);
    return 0;
}