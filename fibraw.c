#include<stdio.h>

long long unsigned int fibonachi(int n) { // Внешняя функция, которая высчитывает значения числа фибоначи позиции n.
    if (n <= 1)
        return n;
    return fibonachi(n - 2) + fibonachi(n - 1);
}

int main (void) {
    printf("Type how many fibonachi number you want to out. \n"); 
    int array_size; scanf("%i", &array_size); // определение длинны массива чисел.
    long long unsigned int a [array_size]; // деклорация массива чисел заданного размера.

    printf("Your fibonachi raw : \n");

    for (int i = 0; i < array_size; i++) { // цикл последовательно записывающий элементы последовательности фибоначи в массив размера n 
        a[i] = fibonachi(i);
        printf("%llu  ", a[i]);
    }

    return 0;
}