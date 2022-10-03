#include<stdio.h>

int main(void) {
// Задание вывести позицию буквы в алфавите.
    char x; // Ввод Символа для работы.
    printf("Enter your char : ");
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z') { //Прогонка по условию, что символ - буква
        printf("Your char is %i-th in alphabet.\n", (x - 'a') + 1); // Для строчных букв
    } else if ( x >= 'A' && x <= 'Z') {
        printf("Your char is %i-th in alphabet.\n", (x - 'A') + 1); // Для заглавных букв
    } 
    else { // Условие, если символ - не буква.
        printf("Enter apropriate symbol !\n");
    }

    return 0;
}