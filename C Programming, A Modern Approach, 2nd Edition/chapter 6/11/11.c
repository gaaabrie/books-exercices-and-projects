#include <stdio.h>

int main(void){

    int n, factorial=1;
    float e = 1.0f, m = 1.0f;

    printf("Enter a intergen: ");
    scanf("%d", &n);

    for(float i = 1; i <= n; i++){
        m = (1.0f/(factorial *= i));
        e += m;
}
    printf("Approximation: %f", e);
    
    return 0;
}