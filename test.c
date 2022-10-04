#include<stdio.h>

int main(void) {
    char n[256]; //Объявляем строчку 
    int i; // Объявляем кол-во цифр в чисоле
    printf("Enter number of characters and your number : ");
    
    scanf("%d %s", &i, &n); //Заводим кол-во цифр и само число
    
    printf("Your new number is : ");
    
    for(i - 1; i >= 0; i--) { //Выводим цифры с конца строчки
        printf("%c", n[i]);
    }
    return 0;

    //работает и на словах и на символах
}