#include <stdio.h>

int main(void){
    int day1, day2, mon1, mon2, year1, year2;
    char phrase[20] = "is earlier than";

    printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d", &mon1, &day1, &year1);
    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d", &mon2, &day2, &year2);
 
    if (year1 < year2)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon1, day1, year1, phrase, mon2, day2, year2);
    else if (year2 < year1)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon2, day2, year2, phrase, mon1, day1, year1);
    else if (mon1 < mon2)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon1, day1, year1, phrase, mon2, day2, year2);
    else if (mon2 < mon1)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon2, day2, year2, phrase, mon1, day1, year1);
    else if (day1 < day2)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon1, day1, year1, phrase, mon2, day2, year2);
    else if (day2 < day1)
        printf("%.2d/%.2d/%.2d %s %.2d/%.2d/%.2d", mon2, day2, year2, phrase, mon1, day1, year1);
        
    return 0;
}