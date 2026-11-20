#include<stdio.h>
#include<stdlib.h>

void DisplayUpper(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    printf("Output: %s\n", str);
}

int main()
{
    char Arr[50];

    printf("Enter a string:\n");
    scanf("%[^\n]", Arr);

    DisplayUpper(Arr);

    return EXIT_SUCCESS;
}