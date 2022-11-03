/*

Дана строка (произвольной длины) и символ c. Удалить a) первое вхождение
этого символа в строке. Если такого элемента в строке нет - ничего не делать. 
Удаляя символ, необходимо сдвинуть все элементы налево на 1 позицию.
Пример: s = "abbccde", c = 'c' -> "abbcde"

*/

#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    char * str;
    scanf("%s", str);


    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == c){
            for(int j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
        break; 
        }
    } 
 
    printf("%s", str);

    return 0;
}