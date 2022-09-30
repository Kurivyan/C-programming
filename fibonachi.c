#include<stdio.h>

int fibonachi(int n) {
    if (n <= 1)
        return n;
    return fibonachi(n - 2) + fibonachi(n - 1);
}

int main (void) {
    printf("Print numbers from fibonachi row you want to see : \n");
    int x;
    scanf("%d", &x);
    printf("Your fibonachi number on %d positiom is : %d \n", x, fibonachi(x));
    
    printf("To exit app type anything. \n");

    int exit_flag = 0;

    scanf("%i", &exit_flag);
    if (exit_flag)
    return 0;
}