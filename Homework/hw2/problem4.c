/*

Дан массив чисел размера n. Вывести все уникальные элементы массива, т.е.
те элементы, что встречаются не более одного раза.
Пример n = 7, arr = {1, 1, 2, 3, 4, 4, 4} -> 2, 3

*/
// 1 2 3 4 5 6 7
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int flag = 0;
    int flag_last = 0;


    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[n - 1])
                flag_last = 1;
            if(arr[i] = arr[j]){
                flag = 1;
            }
        }
        if(flag == 0 && flag_last == 0) {
            printf("%d", arr[i]);
        }
        flag = 0;
    }
    
    return 0;
}