#include <stdio.h>

int main(void){

    int i, n, sqr = 0;

    printf("This program prints a table of squares.\n" );
    printf( "Enter number of entries in table: ");
    scanf("%d" , &n);

    for(int i = 1; i<= n; i++){ 
        for(int j = 0; j < i; j++)
            sqr += i;
        printf("%10d%10d\n", i, sqr);
        sqr -= sqr;
    }
    return 0;
}