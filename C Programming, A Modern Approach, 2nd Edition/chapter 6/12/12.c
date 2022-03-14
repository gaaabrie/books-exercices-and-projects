#include <stdio.h>

int main(void){

    int factorial = 1;
    float e = 1.0f, m = 1.0f, n;

    printf("Enter an aproximation(0.1, 0.01, 0.002...): ");
    scanf("%f", &n);

    for(float i = 1; n < m; i++){
        m = (1.0f/(factorial *= i));
        e += m;
}
    printf("Approximation: %f", e);
    
    return 0;
}