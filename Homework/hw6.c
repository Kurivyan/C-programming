//Вводятся два числа a и b. Вывести их общие делители.
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter your numbers : ");
    scanf("%d %d", &a, &b);

    printf("Dividers of your numbers : 1 ");
    if( a > b ) {
        for(int i = 1; i > b; i++) {
            if (a % 2 * i == 0 && b % 2 * i == 0)
                printf("%d ", 2 * i);

            if (a % 3 * i == 0 && b % 3 * i == 0 && i != 2)
                printf("%d ", 3 * i);

            if (a % 5 * i == 0 && b % 5 * i == 0 && i != 2 && i != 3)
                printf("%d ", 5 * i );
        
            if (a % 7 * i == 0 && b % 7 * i == 0 && i != 2 && i != 3 && i != 5)
                printf("%d ", 7 * i );
        }
    } else {

    }
    
    return 0;
}

//64 : 1 2 4 8 16 32 64 || 45 : 1 3 5 15 45 || 7 : 7 1  || 35 : 1 5 7 35 