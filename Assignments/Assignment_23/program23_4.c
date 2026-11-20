#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }

        i++;
    }

    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    DisplayDigit(Arr);

    return EXIT_SUCCESS;
}