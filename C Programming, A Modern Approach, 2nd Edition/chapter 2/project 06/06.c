#include <stdio.h>

int main (void)
{
    int x;
    printf("enter a value for x: ");
    scanf("%d", &x);

    printf("result: %d\n", ((((3*x + 2)*x - 5)*x -1 )*x + 7)*x - 6);

    return 0;
}
