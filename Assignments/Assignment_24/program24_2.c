#include<stdio.h>
#include<stdlib.h>

int Frequency(char *str, char ch)
{
    int i = 0;
    int iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount++;
        }

        i++;
    }

    return iCount;
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

    iRet = Frequency(Arr, cValue);

    printf("Frequency is: %d\n", iRet);

    return EXIT_SUCCESS;
}