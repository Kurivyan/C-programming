#include<stdio.h> 

int main(void) { //Не эффективный скрипт !!! Не запускать !

// Для int
    int int_max;
    int int_min;
    printf("Max and Min for int. \n" );
    for(int a = 1; a > 0; a++) {
            int_max = a;
    }
    for(int a = -1; a < 0; a--) {
            int_min = a;
    }

    int_max -= 1; int_min += 1; 

    printf("Your max value for int is : %i min : %i \n", int_max, int_min);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для unsigned int
    unsigned int unsigned_int_max;
    printf("Max and Min for unsigned int. \n" );
    for(unsigned int a = 1; a != 0; a++) {
            unsigned_int_max = a;
    }

    unsigned_int_max -= 1;

    printf("Your max value for unsigned int is : %u \n", unsigned_int_max);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для short int 
    printf("Max and Min for short int. \n" );
    short int short_int_max;
    short int short_int_min;
    for(short int a = 1; a > 0; a++) {
            short_int_max = a;
    }
    for(short int a = -1; a < 0; a--) {
            short_int_min = a;
    }

    short_int_max -= 1; short_int_min += 1; 

    printf("Your max value for short int is : %hi min : %hi \n", short_int_max, short_int_min);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для unsigned short int
    unsigned short int unsigned_short_int_max;
    printf("Max and Min for unsigned short int. \n" );
    for(unsigned short int a = 1; a != 0; a++) {
            unsigned_short_int_max = a;
    }

    unsigned_short_int_max -= 1;

    printf("Your max value for unsigned short int is : %hu \n", unsigned_short_int_max);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для long int 
    printf("Max and Min for long int. \n" );
    long int long_int_max;
    long int long_int_min;
    for(long int a = 1; a > 0; a++) {
            long_int_max = a;
    }
    for(long int a = -1; a < 0; a--) {
            long_int_min = a;
    }

    long_int_max -= 1; long_int_min += 1; 

    printf("Your max value for long int is : %li min : %li \n", long_int_max, long_int_min);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для unsigned long int
    unsigned long int unsigned_long_int_max;
    printf("Max and Min for unsigned long int. \n" );
    for(unsigned long int a = 1; a != 0; a++) {
            unsigned_long_int_max = a;
    }

    unsigned_long_int_max -= 1;

    printf("Your max value for unsigned long int is : %lu \n", unsigned_long_int_max);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для long long int 
    printf("Max and Min for long long int. \n" );
    long long int long_long_int_max;
    long long int long_long_int_min;
    for(long long int a = 1; a > 0; a++) {
            long_long_int_max = a;
    }
    for(long long int a = -1; a < 0; a--) {
            long_long_int_min = a;
    }

    long_long_int_max -= 1; long_long_int_min += 1; 

    printf("Your max value for long long int is : %lli min : %lli \n", long_long_int_max, long_long_int_min);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------

// Для unsigned long long int
    unsigned long long int unsigned_long_long_int_max;
    printf("Max and Min for unsigned long int. \n" );
    for(unsigned long long int a = 1; a != 0; a++) {
            unsigned_long_long_int_max = a;
    }

    unsigned_long_long_int_max -= 1;

    printf("Your max value for unsigned long int is : %llu \n", unsigned_long_long_int_max);
    printf("\n");
    printf("\n");
// -----------------------------------------------------------------------



    printf("To exit app type anything. \n");

    int exit_flag = 0;

    scanf("%i", &exit_flag);
    if (exit_flag)
    return 0;
}

