#include <stdio.h>

int main(void){
    int day, day2 = 1, mon, mon2 = 1, year, year2 = 1, date, date2;

    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d", &mon, &day, &year);

    date = (mon * 30) + day + year * 365;

    while ((mon2 * day2 * year2) > 0){
        printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &mon2, &day2, &year2);

        date2 = (mon2 * 30) + day2 + year2 * 365;
    
        if (date2 < date && (mon2 * day2 * year2) > 0)
            mon = mon2, day = day2, year = year2;
        }
    
    printf("%.2d/%.2d/%.2d is the earliest date", mon, day, year);

    return 0;
}