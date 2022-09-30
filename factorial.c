#include<stdio.h>

int recurs(int n) {
    if (n <= 1)  { 
        return 1;
    }
    return recurs(n - 1) * n;
}

int main(void) {
    int a;
    printf("Type the number of factorial you want to count : \n");
    scanf("%d", &a);
    printf("Your factorial of %d is - > %d", a, recurs(a));
    return 0;
}