#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int i = 0;
    int iSmall = 0;
    int iCapital = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iSmall++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCapital++;
        }

        i++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    iRet = Difference(Arr);

    printf("Difference is: %d\n", iRet);

    return EXIT_SUCCESS;
}