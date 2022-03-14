#include <stdio.h>

int main(void){

    int month, start, exit = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &month);
    printf("Enter starting day of the week (1=sun, 7=sat): ");
    scanf("%d", &start);

    for(int i = 1, j = 1; j <= month; i++){
        if (i < start){
            printf("   ");
        }
        else
            printf("%3d", j++);
        if (i % 7 == 0){
            printf("\n");
            }
    }
}