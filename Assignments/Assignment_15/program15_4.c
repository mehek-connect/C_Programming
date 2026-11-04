#include<stdio.h>
#include<stdlib.h>

int Mult(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    iAns = iNo1 * iNo2 * iNo3;

    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    printf("Enter third number:\n");
    scanf("%d", &iValue3);

    iRet = Mult(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return EXIT_SUCCESS;
}
