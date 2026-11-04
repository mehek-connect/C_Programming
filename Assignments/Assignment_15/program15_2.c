#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Number is greater than 100\n");
    }
    else
    {
        printf("Number is not greater than 100\n");
    }

    return EXIT_SUCCESS;
}
