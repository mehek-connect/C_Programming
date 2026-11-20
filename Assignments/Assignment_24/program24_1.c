#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return true;
        }

        i++;
    }

    return false;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    printf("Enter a character:\n");
    scanf(" %c", &cValue);

    bRet = CheckChar(Arr, cValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return EXIT_SUCCESS;
}