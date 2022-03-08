#include <stdio.h>

int main(void){

    int grade, grade1; 

    do{
        printf("Enter numerical grade:");
        scanf("%d", &grade);
        if(grade > 100 || grade < 0)
            printf("Please enter a valid grade\n");
    }while (grade > 100 || grade < 0 );

    printf("Letter grade:");
    
    grade1 = grade / 10;

    switch (grade)
    {
    case 100:
        printf("A");
        break;
    
    default:
        switch (grade1)
    {
        case 9:
            printf("A");
            break;
        
        case 8:
            printf("B");
            break;
        
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    }
    return 0;
}