#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid input\n");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0;
    }
    else if ((fAmount-999) < 5000 )
    {
        fDiscount = 10;
    }
    else 
    {
        fDiscount = 20;
    }
    if (fAmount >= 0)
    {
        fDiscount = (fAmount*fDiscount)/100;
        fFinalAmount = fAmount - fDiscount;

        printf("Discount amount :%f\n" , fDiscount);
        printf("Final amount : %f\n" , fFinalAmount);

    }
    
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter your purchase amount: \n");
    scanf("%f", &fAmount);
    
    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

