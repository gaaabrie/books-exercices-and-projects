#include <stdio.h>

int main(void){

    int income;

    printf("Enter the amount of taxable income: ");
    scanf("%d", &income);

    if (income < 750)
        printf("Amount of tax: $%.2f", (income * 1.01f) - income);
    else if (income < 2250)
        printf("Amount of tax: $%.2f", (income * 1.02f + 7.50f) - income);
    else if (income < 3750)
        printf("Amount of tax: $%.2f", (income * 1.03f + 37.50f) - income);
    else if (income < 5250)
        printf("Amount of tax: $%.2f", (income * 1.04f + 82.50f) - income);
    else if (income < 7000)
        printf("Amount of tax: $%.2f", (income * 1.05f + 142.50f) - income);
    else printf("Amount of tax: $%.2f", (income * 1.06f + 230.00f) - income);

    return 0;



}
