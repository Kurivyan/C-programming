/*

Вводится n вывести такие числа a b c, что a + b + c = n || 0 < a < n | 0 < b < n | 0 < c < n

*/
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            for (int k = 1; k < n; k++){
                if(i + j + k == n)
                    printf("a : %d | b : %d | c : %d \n", i, j, k);
            }
        }
    }
    

    return 0;
}
