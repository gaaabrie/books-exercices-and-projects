#include <stdio.h>

int main(void)
{
    int check_digit, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    
    check_digit = 9 - ((((n1+n3+n5+n7+n9+n11)*3 + (n2+n4+n6+n8+n10)) - 1) % 10);

    if (check_digit == n12)
        printf("VALID");
    else
        printf("NOT VALID");

    return 0;
    
}