#include <stdio.h>

int main(void)
{ 
    float loan, rate, payment;
    int num_payment;

    printf("Enter amount of loan: "); 
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter the number of payments: ");
    scanf("%d", &num_payment);


 for (int x=1; num_payment > 0; num_payment--, x++){
    if (loan > 0){
        loan =  loan - payment + (loan * rate / 100 / 12);

        printf("Balance remaining after %d month(s): $%.2f\n ", x, loan);
        }
    }

    return 0;
}
