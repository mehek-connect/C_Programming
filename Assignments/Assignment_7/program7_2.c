#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iCnt != iNo+1)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter frequency :\n");
    scanf("%d" , &iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}