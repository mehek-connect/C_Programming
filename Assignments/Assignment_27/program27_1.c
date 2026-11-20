#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int i = 0;
    int iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCount++;
        }

        i++;
    }

    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters: %d\n", iRet);

    return EXIT_SUCCESS;
}