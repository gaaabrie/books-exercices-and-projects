#include <Stdio.h>

int main(void)
{

    float  per_share, commission, rival_comission, value;
    int share;

    printf("Enter the number of shares: ");
    scanf ("%d", &share);
    printf("Enter the price per share: ");
    scanf("%f", &per_share);

    value = share * per_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    if (commission < 39.00f)
        commission = 39.00f;
    
    printf("Commission: $%.2f\n" , commission);

    if (share < 2000){
        rival_comission = 33.00f + 0.03f * share;
        printf("Rival's comission: &%.2f", rival_comission);
    }
     else {
        rival_comission = 33.00f + 0.02f * share;
        printf("Rival's comisson: $%.2f", rival_comission);
     }
    return 0; 
}