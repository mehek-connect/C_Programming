#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        printf("Bill is %d: " , 5*iUnits);
    }
    else if ((iUnits - 100) < 200)
    {
        printf("Bill is %d: " , 7*iUnits);
    }
    else
    {
        printf("Bill is: %d" , 10*iUnits);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter units consumed\n");
    scanf("%d", &iUnits);

    CalculateBill(iUnits);

    return EXIT_SUCCESS;
}