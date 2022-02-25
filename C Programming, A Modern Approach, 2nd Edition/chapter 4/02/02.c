#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a three-digits number: ");
    scanf("%d", &num);

    printf("%d", num %10);
    num = num / 10;
    printf("%d%d", (num % 10), (num / 10));

    return 0;
}