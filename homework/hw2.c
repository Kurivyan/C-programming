#include<stdio.h>

int main(void) {
// Задание вывести позицию буквы в алфавите.
    int exit_flag;
    char x;
    printf("Enter your char : ");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z') {
        printf("Your char is %i-th in alphabet.\n", (x - 'a') + 1);
    } else if ( x >= 'A' && x <= 'Z') {
        printf("Your char is %i-th in alphabet.\n", (x - 'A') + 1);
    } else {
        printf("Enter apropriate symbol !\n");
    }

    printf("To exit enter any number : ");
    scanf("%i", &exit_flag);

    if(exit_flag)
    return 0;
}