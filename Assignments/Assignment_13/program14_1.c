#include<stdio.h>
#include<stdlib.h>

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }

        iCnt++;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = MultFactor(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return EXIT_SUCCESS;
}
