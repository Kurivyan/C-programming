#include<stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int arr[n];
    float avg = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        avg += arr[i];
    }

    printf("%.1f", avg / (n * 1.));

    return 0;
}