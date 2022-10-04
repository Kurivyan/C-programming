//Вводятся два числа a и b. Вывести их общие делители.
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter your numbers : ");
    scanf("%d %d", &a, &b);

    printf("Dividers of your numbers : ");
    if (a > b) {
        for(int i = 1; i <= a; i++){
                if(a % i == 0 && b % i == 0)
                    printf("%d ", i);
            }
    } else {
        for(int i = 1; i <= b; i++){
                if(a % i == 0 && b % i == 0)
                    printf("%d ", i);
            }
    }


    return 0;
}

//64 : 1 2 4 8 16 32 64 || 45 : 1 3 5 15 45 || 7 : 7 1  || 35 : 1 5 7 35 