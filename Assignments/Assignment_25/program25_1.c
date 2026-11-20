#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckAlphabet(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    bRet = CheckAlphabet(cValue);

    if(bRet == TRUE)
    {
        printf("It is an alphabet\n");
    }
    else
    {
        printf("It is not an alphabet\n");
    }

    return EXIT_SUCCESS;
}