/*

Дан массив чисел размера n. Циклически сдвинуть на 1 элемент a) влево;
b) вправо.
Пример: n = 4, arr = {1, 2, 3, 4} -> a) {2, 3, 4, 1}; b) {4, 1, 2, 3}

*/
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], arr_l[n], arr_r[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++)
        arr_l[i] = arr[i + 1];
    
    for(int i = n - 1; i >= 1; i--)
        arr_r[i] = arr[i - 1];
    
    arr_r[0] = arr[n - 1];
    arr_l[n - 1] = arr[0];

    for (int i = 0; i < n; i++)
        printf("%d ", arr_l[i]);

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr_r[i]);
    return 0;
}