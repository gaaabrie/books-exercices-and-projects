#include <stdio.h>

int main(void)
{ 
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

 for (int x=1; loan > 0; x++ )
    
    {
    loan =  loan - payment + (loan * rate / 100 / 12);

    printf("%d month: %.2f\n ", x, loan);
    }

    return 0;
}
