#include <stdio.h>

int main(void){

    int m, n, remainder;

    printf("Enter two integers:");
    scanf("%d%d", &m, &n);

    do{
        if ( m % n == 0){
            break;
        }
        else
            remainder = m % n;
            m = n;
            n = remainder;
            remainder = m % n;
    }while (remainder > 0);

    printf("Greatest common divisor:1%d", n);
}