#include <stdio.h>

int main (void)
{
    int x;
    printf("enter a value for x: ");
    scanf("%d", &x);

    printf("result: %d\n", 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5* (x*x*x) - (x*x) + 7 * x - 6);

    system ("pause");
    return 0;
}
