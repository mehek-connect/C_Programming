#include<stdio.h>
#include<stdlib.h>

void StrRev(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    StrRev(Arr);

    printf("Reversed string: %s\n", Arr);

    return EXIT_SUCCESS;
}