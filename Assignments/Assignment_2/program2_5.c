#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0 ;
    BOOL bRet = false;   

    printf("Enter first number :\n");   
    scanf("%d" , &iValue1);

    bRet = CheckEven(iValue1);

    if(bRet == true)
    {
        printf("It is even\n");
    }
    else
    {
        printf("It is odd\n");
    }

    return EXIT_SUCCESS;
}