#include<stdio.h>

long long unsigned int fibonachi(int n) {
    if (n <= 1)
        return n;
    return fibonachi(n - 2) + fibonachi(n - 1);
}

int main (void) {
    printf("Type how many fibonachi number you want to out. \n"); 
    int array_size; scanf("%i", &array_size);
    long long unsigned int a [array_size];

    printf("Your fibonachi raw : \n");

    for (int i = 0; i < array_size; i++) {
        a[i] = fibonachi(i);

        printf("%llu  ", a[i]);

        if (i + 1 == array_size) {
                printf("\nTo exit app type anything. \n");
        }
    }

    int exit_flag = 0;

    scanf("%i", &exit_flag);
    if (exit_flag)
    return 0;
}