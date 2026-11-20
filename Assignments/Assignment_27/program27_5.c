#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    i--;

    while(i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }

    printf("\n");
}

int main()
{
    char Arr[100];

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    printf("Reverse string: ");

    DisplayReverse(Arr);

    return EXIT_SUCCESS;
}