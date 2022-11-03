/*

Даны две строки размера m и n соответственно, и целое число k.
Поменять элементы первой строки начиная с позиции k элементами второй строки.
Проверить допустимость такой замены.
Пример: m = 5, n = 2, k = 1, s1 = "abcde", s2 = "qq" -> "aqqde".
m = 5, n = 2, k = 4, s1 = "abcde", s2 = "qq" -> невозможно

*/
#include<stdio.h>

int main(){
    int k, m, n;
    scanf("%d %d %d", &m, &n, &k);
    
    if (m < (k + 1) + n) {
        printf("Unable to do !"); return 0;
    } else {
        char str1[m];
        char str2[n];

        scanf("%s %s", str1, str2);

        for (int i = 0; i < n; i++, k++){
            str1[k] = str2[i];
        }     

        printf("%s", str1);
    }

    return 0;
}