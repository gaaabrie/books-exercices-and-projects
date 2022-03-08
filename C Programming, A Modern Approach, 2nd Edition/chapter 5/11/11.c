#include <stdio.h>

int main(void){

    int n, n1, n2;

    printf("Enter a two-digit number:");
    scanf("%d", &n);
    printf("You entered the number ");

    n1 = n / 10; n2 = n % 10;

    switch (n1)
    {
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eigthy"); break;
        case 9: printf("ninety"); break;
        default: break;
    }
    
        switch (n2)
        {
            case 1: if (n1 == 1)
                        printf("eleven.");
                    else
                        printf("-one.");  break;
            case 2: if (n1 == 1)
                        printf("twelve.");
                    else
                        printf("-two."); break;
            case 3: if (n1 == 1)
                        printf("thirteen.");
                    else 
                        printf("-three."); break;
            case 4: if (n1 == 1)
                        printf("fourteen.");
                    else
                        printf("-four."); break;
            case 5: if (n1 == 1)
                        printf("fifteen");
                    else
                        printf("-five."); break;
            case 6: if (n1 == 1)
                        printf("sixteen.");
                    else
                        printf("-six."); break;
            case 7: if (n1 == 1)
                        printf("seventeen.");
                    else    
                        printf("-seven."); break;
            case 8: if (n1 == 1)
                        printf("eighteen.");
                        else
                        printf("-eight."); break;
            case 9: if (n1 == 1)
                        printf("nineteen.");
                        else
                        printf("-nine."); break;
            default: if (n1 == 1 && n2 == 0) 
                        printf("ten.");
                    else    
                        break;
    
    }

    return 0;
}