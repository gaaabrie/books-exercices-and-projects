#include <stdio.h>

int main(void){

    int n, sqr = 1; 

    printf("Enter a number:");
    scanf("%d", &n);

    for(int i = 2; sqr < n; i += 2){
        sqr = i * i;
        if (sqr <= n)
            printf("%d\n", sqr);
    }

    return 0;
}