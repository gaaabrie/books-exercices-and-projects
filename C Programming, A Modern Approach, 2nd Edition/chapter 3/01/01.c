#include <stdio.h>

int main(void)
{   int month = 0, day = 0, year= 0;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date: %.4d%.2d%.2d", year, month, day);

    return 0;
}