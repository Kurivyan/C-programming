/*
Given a year number. Output the number of days of that year.

Example:
Input:
1900

Output
365

Example:
Input:
2012

Output
366
*/
#include<stdio.h>

int main(){
    int year;
    scanf("%i", &year);

    if (year % 4 == 0) {
        if (year % 100 != 0){
            printf("366");
        } else if (year % 100 == 0 && year % 400 == 0){
            printf("366");
        } else {
            printf("365");
        } 
    } else {
        printf("365");
    }
    return 0;
}