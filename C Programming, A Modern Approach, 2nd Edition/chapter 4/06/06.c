#include <stdio.h>

int main(void)
{
    int check_digit, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13);
    
    check_digit = 9 - ((((n1+n3+n5+n7+n9+n11) + (n2+n4+n6+n8+n10+n12)*3) - 1) % 10);

    printf("%d", check_digit);

    return 0;
    
}