//Вводятся символы, ввод заканчивается точкой.  Определить, каких символов больше: заглавных, или строчных.
#include<stdio.h>

int main(){
    int counter1 = 0;
    int counter2 = 0;
    char n;
    printf("Write your symbols : ");
    while(1){
        scanf("%c", &n);
        if(n == '.'){ //условия выхода из вечного цикла
            break;
        }
        if (n >= 'a' && n <= 'z') {
            counter1++;
        } else if (n >= 'A' && n <= 'Z') {
            counter2++;
        }
    }

    if (counter1 > counter2) {
        printf("Among your symbols more lowercase letters");
    } else if (counter1 == counter2) {
        printf("There are equal capital and lowercase letters");
    } else {
        printf("Among your symbols more capital letters");
    }
    
    return 0;
}