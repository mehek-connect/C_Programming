#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }

        i++;
    }

    return -1;
}

int main()
{
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    printf("Enter a character:\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Position: %d\n", iRet);

    return EXIT_SUCCESS;
}