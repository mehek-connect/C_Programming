#include<stdio.h>
#include<stdlib.h>

void DisplayLower(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
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

    DisplayLower(Arr);

    return EXIT_SUCCESS;
}