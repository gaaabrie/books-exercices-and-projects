#include <stdio.h>

int main()
{
    int money;
    printf("Enter a dollar amount:");
    scanf("%d", &money);

    printf("20 dollar bills: %d\n" , money/20);
    money -= 20*(money/20);

    printf("10 dollar bills: %d\n", money/10);
    money -= 10*(money/10);

    printf("5 dollar bills: %d\n", money/5);
    money-= 5*(money/5);

    printf("1 dollar bills: %d\n",money/1);

    return 0;
}
