#include<stdio.h>
#include<stdlib.h>

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }

        iCnt++;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = SumNonFactor(iValue);

    printf("Summation of all non-factors is: %d\n", iRet);

    return EXIT_SUCCESS;
}
