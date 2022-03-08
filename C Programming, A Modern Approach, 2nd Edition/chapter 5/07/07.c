#include <stdio.h>

int main(void){

    int n1, n2, n3, n4;
    int largest, smallest, largest1, largest2, smallest1, smallest2;

    printf("Enter four integers:");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2){
        largest1 = n1;
        smallest1 = n2;
    }
    else {
        largest1 = n2;
        smallest1 = n1;
    }
    if (n3 > n4){
        largest2 = n3;
        smallest2 = n4;
    }
    else {
        largest2 = n4;
        smallest2 = n3;
    }
    if (largest1 > largest2){
        largest = largest1;
    }
    else{
        largest = largest2;
    }
    if (smallest1 < smallest2){
        smallest = smallest1;
    }
    else smallest = smallest2 ;

    printf("Largest:%d\nSmallest:%d", largest, smallest);
}