#include <stdio.h>
#include <string.h>

int main(void){

    int hour, min;
    char x[] = "AM";

    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min );
    

    switch (hour)
    {
    case 12: case 13: case 14: case 15: case 16: case 17: case 18:
    case 19: case 20: case 21: case 22: case 23:
        strcpy(x, "PM"); break;
    case 00: hour = 12; break;
    default: break;
    }
    if (hour >= 13 && hour <= 24){
        hour -= 12;
    }
    printf("Equivalent 12-hour time: %d:%.2d %s", hour, min, x);

    return 0;
        

}