/*

Вычислить сумму 1/1 + 1/2² + 1/3² ..... 1/n² 

*/
#include<stdio.h>

int main(void) {
    float value = 0.;
    for(float i = 1.; (1. / ( i * i)) > 0.001; i++){
        value += (1. / (i * i));
    }
    printf("%f", value);
    return 0;
}