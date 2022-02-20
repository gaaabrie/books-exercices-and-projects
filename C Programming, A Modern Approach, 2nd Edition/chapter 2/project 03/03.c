#include <stdio.h>

#define M_PI 3.14159265358979323846

int main(void)
{
    int radius;
    printf("Enter radius of sphere: ");
    scanf("%d", &radius);

    printf("Volume: %.2f \n", 4.0f/3.0f * M_PI * radius * radius * radius);
]
    return 0;
    }
