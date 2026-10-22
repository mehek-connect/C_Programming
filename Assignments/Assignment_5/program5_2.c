#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear1)
{
   if(((iYear1 % 400) == 0 && (iYear1 % 4 == 0)) || (iYear1 % 100 != 0))
   {
    printf("It is a leap year\n");
   }
   else
   {
    printf("It is not leap year\n");
   }
    
}

int main()
{
    int iYear = 0;

    printf("Enter year : \n");
    scanf("%d" , &iYear);

    CheckLeapYear(iYear);
    
    return EXIT_SUCCESS;
}