#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("Number contains zero\n");
    }
    else
    {
        printf("Number does not contain zero\n");
    }

    return EXIT_SUCCESS;
}
