#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digits\n");
    }
    else
    {
        printf("Special character\n");
    }


}


int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c" , &cValue);

    CheckCharacter(cValue);
    
    return EXIT_SUCCESS;
}