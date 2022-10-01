#include<stdio.h>
#include<string.h>

int main(void){

    printf("Enter first time : ");
    scanf("%s[^\n]", &s1);
    temp_1 = s1[0]; temp_2 = s1[1];
    printf("%s", strcat(temp_1, temp_2));
    printf("Enter second time : ");
    scanf("%s[^\n]", &s2);
    printf("First input : %s, second : %s ", s1, s2);

    printf("Enter the price for hour : ");
    scanf("%s", &s3);

    int hour_1 = (s1[0] + s1[1]) - 48;
    
    return 0;
}