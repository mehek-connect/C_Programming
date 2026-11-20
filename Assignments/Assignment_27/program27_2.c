#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int i = 0;
    int iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
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

    iRet = CountSmall(Arr);

    printf("Number of small characters: %d\n", iRet);

    return EXIT_SUCCESS;
}