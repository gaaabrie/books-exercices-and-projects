#include <stdio.h>

int main(void)
{   
    int beginning, mid, end;
    printf("Enter a phone number: ");
    scanf("(%d) %d- %d", &beginning, &mid, &end);

    printf("You entered: %.3d.%.3d.%.4d ", beginning, mid, end );


}