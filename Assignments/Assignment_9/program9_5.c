#include<stdio.h>
#include<stdlib.h>

int Difference(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    if(iEvenFact > iOddFact)
    {
        iDiff = iEvenFact - iOddFact;
    }
    else
    {
        iDiff = iOddFact - iEvenFact;
    }

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf("Difference is: %d\n", iRet);

    return EXIT_SUCCESS;
}
