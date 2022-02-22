#include <stdio.h>

int main(void)
{
    int isbn, gsi, indentifier, code, item, check;
    printf(" Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &indentifier, &code, &item, &check);

    printf(" GSI prefix: %d\n Group identifier: %d\n Publisher code: %d\n Item number: %d\n Check digit: %d",
             gsi, indentifier, code, item, check);


}