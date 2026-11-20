#include<stdio.h>
#include<stdlib.h>

void DisplayASCII(char ch)
{
    printf("Decimal value      : %d\n", ch);
    printf("Octal value        : %o\n", ch);
    printf("Hexadecimal value  : %X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    DisplayASCII(cValue);

    return EXIT_SUCCESS;
}