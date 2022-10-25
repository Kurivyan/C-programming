/*

Вводятся n чисел, вычислите сумму всех четных элементов и произведение всех нечетных

*/

#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    int prod = 1;
    for(int i = 0; i < n; i++){
        scanf("%d", &n);
        if(n % 2 == 0) {
            sum += n;
        }
        if(n % 2 != 0) {
            prod *= n;
        }
            
    }
    printf("Sum even : %d | Prod odd : %d", sum, prod);
    return 0;
}