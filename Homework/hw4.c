//Вводятся два числа : k и n. Вывести k-ю цифру ( если считать, начиная от младших разрядов) числа n;

#include<stdio.h>

int main(void) {
    printf("Enter your number and position of number you want to get. ");
    int n;
    int k;
    int minus = 1;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < k; i++){ //задаем кол-во отсекаемых цифр справа
        minus *= 10;
    }
    for(n; n >= minus; n /= 10); //отсекаем справа
    
    for(int i = 0; i < k; i++, minus /= 10){ //отсекаем слева 
        n %= minus;
    }
    
    printf("%d", n);

    return 0;
}

// 2345 5 : 2345 % 1000 => 345 % 100 => 45 % 10 