/*

Вводится n * n матрица, вывести её след

*/
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int val;
    int trace = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &val);
            if(i == j)
                trace += val;
        }
    }
    printf("Trace : %d\n", trace);
    return 0;
}