#include <stdio.h>

int main(void){

    int speed;

    printf("Enter a wind speed: ");
    scanf("%d", &speed);
    printf("Description: ");

    if (speed < 1)
        printf("calm");
    else if (speed <= 3)
        printf("light air");
    else if (speed <= 27)
        printf("Breeze");
    else if (speed <= 47)
        printf("Gale");
    else if (speed <= 63)
        printf("Storm");
    else 
        printf("Hurricane");

    return 0;

}