#include<stdio.h>
#include<stdlib.h>

void Display(int iNo , int iFrequency)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iFrequency ; iCnt++)
   {
    printf("%d\t" , iNo);
   }

}
int main()
{
    int iValue1 = 0 , iCnt = 0;   
    printf("Enter first number :\n");   
    scanf("%d" , &iValue1);

    printf("Enter frequency :\n");   
    scanf("%d" , &iCnt);

    Display(iValue1,iCnt);



    return EXIT_SUCCESS;
}