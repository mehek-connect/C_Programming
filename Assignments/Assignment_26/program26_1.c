#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t", iCnt);
        printf("%d\t", iCnt);
        printf("%X\t\t", iCnt);
        printf("%o\n", iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}