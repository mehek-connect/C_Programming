#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iIndex = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iIndex = i;
        }

        i++;
    }

    return iIndex;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    printf("Enter a character:\n");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Index of last occurrence: %d\n", iRet);

    return EXIT_SUCCESS;
}