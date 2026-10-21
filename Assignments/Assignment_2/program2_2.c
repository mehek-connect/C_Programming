#include<stdio.h>
#include<stdlib.h>


void Display(int iNo)
{
    int iCnt = 0;    
    while(iNo > iCnt)   //4>0  3>0 2>0  1>0
    {
        printf(" * ");
        iNo--;  //3 //2 //1 //0
    } 
}
int main()
{
    int iValue = 0;   
    printf("Enter number :\n");   //4
    scanf("%d" , &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}