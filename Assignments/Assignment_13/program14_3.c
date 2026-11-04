#include<stdio.h>
#include<stdlib.h>

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n", iCnt);
        }

        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    DisplayNonFactor(iValue);

    return EXIT_SUCCESS;
}
