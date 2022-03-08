#include <stdio.h>

int main(void){
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 < num && num <=9)
        printf("The number %d has 1 digit", num);
    else if (10 <= num && num <= 99)
        printf("The number %d has 2 digit", num);
    else if (100 <= num && num <= 999)
        printf("The number %d has 3 digit", num);
    else if (1000 <= num && num <= 9999)
        printf("The number %d has 4 digit", num);

    return 0;
}