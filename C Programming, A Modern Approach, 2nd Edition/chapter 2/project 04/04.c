#include <stdio.h>

int main (void)
{
    float dollar;
    printf("Enter an amount: ");
    scanf("%f", &dollar);

    printf("With tax added: %.2f\n", dollar * 1.05f);
    
    return 0;
}
