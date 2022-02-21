#include <stdio.h>

int main(void)
{
    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%02d/%02d/%04d",item_number, unit_price, month, day, year);

    return 0;
}