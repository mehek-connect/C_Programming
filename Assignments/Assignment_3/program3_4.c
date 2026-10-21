#include <stdio.h>
#include <stdlib.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
        printf("Uppercase: %c", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        printf("Lowercase: %c", ch);
    }
}

int main() {
    char cValue = '0';

    printf("Enter a letter: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}