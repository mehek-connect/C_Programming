#include<stdio.h>
#include<stdlib.h>

int Difference(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }

        iCnt++;
    }

    return (iFactSum - iNonFactSum);
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
