#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char cCnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c ", cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c ", cCnt);
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}