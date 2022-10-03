#include<stdio.h>

int fibonachi(int n) { // Внешняя функция, которая высчитывает значения числа фибоначи позиции n.
    if (n <= 1)
        return n;
    return fibonachi(n - 2) + fibonachi(n - 1);
}

int main (void) {
    printf("Print numbers from fibonachi row you want to see : \n");
    int x;
    scanf("%d", &x); // Запись желаемого порядкового числа фибоначи в переменную x | например x = 4 - четвертый элемент последовательности
    printf("Your fibonachi number on %d positiom is : %d \n", x, fibonachi(x)); // Вызов внешней функции fibonachi с последующим выводом.

    return 0;
}