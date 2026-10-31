#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("");
        }
        else
        {
            printf("%d\t",iCnt );
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter frequency :\n");
    scanf("%d" , &iValue);

    DisplayOdd(iValue);
    
    return EXIT_SUCCESS;
}