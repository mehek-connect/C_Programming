#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;

    while(iCnt >= 1)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }

        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}