/*
Given three natural numbers a, b, c which represent the day, month and year of some date. Output “yes" if the given date is correct and “no” otherwise.

Example:
Input:
32 1 1991

Output
no
*/

#include<stdio.h>

int main(){
    int a, b, c;

    int flag = 2;
    scanf("%i %i %i", &a, &b, &c);

    if (c % 4 == 0) { // проверка на високосность года
        if (c % 100 != 0){
            flag = 1;
        } else if (c % 100 == 0 && c % 400 == 0){
            flag = 1;
        } else {
            flag = 0;
        } 
    } else {
        flag = 0;
    }

    if (b == 1, 3, 5, 7, 8, 10, 12) { // проверка всех месяцев, кроме февраля
        if (a <= 31){
            printf("yes");
        } else {
            printf("no");
        }
    } else if(b == 4, 6, 9, 11) {
        if (a <= 30){
            printf("yes");
        } else {
            printf("no");
        }
    }

    if(b == 2) {
        if(flag == 1){
            if (a <= 29){
                printf("yes");
            } else {
                printf("no");
            }
        }
        if (flag == 0){
            if (a <= 28){
                printf("yes");
            } else {
                printf("no");
            }
        }
    }

    return 0;
}