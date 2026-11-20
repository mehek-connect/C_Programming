#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            return TRUE;
        }

        i++;
    }

    return FALSE;
}

int main()
{
    char Arr[100];
    BOOL bRet = FALSE;

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    bRet = CheckVowel(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowels\n");
    }
    else
    {
        printf("String does not contain vowels\n");
    }

    return EXIT_SUCCESS;
}