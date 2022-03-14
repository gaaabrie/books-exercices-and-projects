#include <stdio.h>

int main(void){

    int number, num_reverse, i = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Number reversed: ");

    num_reverse = number;

	for (;num_reverse > 0;){
        num_reverse = num_reverse / 10;
        i++;
    }

    do{
        printf("%d", number % 10);
        number = number / 10;
        i--;
	    }while (i > 0);
}