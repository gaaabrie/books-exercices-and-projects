#include <stdio.h>

int main(void){

    int m, n, m1, n1, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    m1 = m, n1 = n;

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

    m1 = m1 / n, n1 = n1 / n;

    printf("in lowest terms: %d/%d", m1, n1);
}