#include <stdio.h>

int main(void){

    float n[999999999], largest = 0;
    

    for (int i = 0;;i++){
        printf("Enter a number:");
        scanf("%f", &n[i]);
        if (largest < n[i])
            largest = n[i];
        if (n[i] > 0)
            break;
    }   
    
    printf("The largest entered was %.2f", largest);

    return 0;
}