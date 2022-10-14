#include<stdio.h>

int main(void) {
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++){
        printf("%d ", k);
    }

/*
i = 0 -> printf -> i + 1

i = 1 -> printf -> i + 1

i = 2 -> printf -> i + 1

i = 3 -> printf -> i + 1

i = 4 != i < n; n = 4 break 

*/



    return 0;
}