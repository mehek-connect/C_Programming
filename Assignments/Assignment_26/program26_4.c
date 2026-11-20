#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || 
       (ch >= 'a' && ch <= 'z') || 
       (ch >= '0' && ch <= '9'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special symbol\n");
    }
    else
    {
        printf("It is not a special symbol\n");
    }

    return EXIT_SUCCESS;
}