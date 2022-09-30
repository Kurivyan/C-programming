#include<stdio.h>

int main(void) {
    int a;
    printf('Введите какой факториал вы ходите посчитать : \n');
    scanf('%d', &a);
    printf('Факториал %d : %d', a, recurs(a));
    return 0;
}

int recurs(int n) {
    if (n <= 1)  { 
        return 1;
    }
    return recurs(n - 1) * n;
}