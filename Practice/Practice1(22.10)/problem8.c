/*

Вводятся слова до "." вывидите длинну максимального

*/
#include<stdio.h> 
 
int main(void) { 
    char n; 
    int counter = 0; 
    int max = 0; 
    do { 
        n = getchar(); 
        if(n != ' '); 
            counter++; 
        if(n == ' ') {
            counter -= 1;
            if(max < counter) 
                max = counter; 
            counter = 0; 
        } 
    }   while(n != '.'); 
    printf("%d", max); 
    return 0; 
}