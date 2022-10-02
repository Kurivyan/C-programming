#include<stdio.h>

int main(void) {
    int exit_flag;
    int a, b;
    printf("Enter your numbers : ");
    scanf("%d[^\n]", &a); scanf("%d", &b);
    if (b > a) {
        printf("The greatest number is %d. \n", b);
    } else if (a == b) {
        printf("The numbers are equal.\n");
    } else if (a > b){
        printf("The greatest number is %d. \n", a);
    }

    printf("To exit enter any number : ");
    scanf("%i", &exit_flag);

    if(exit_flag)
    return 0;
    return 0;
}