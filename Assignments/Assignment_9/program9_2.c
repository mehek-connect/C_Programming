#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iRs = 0;
    int iRate = 88;

    iRs = iNo*iRate;


    return iRs;

}

int main()
{
    int iValue = 0 , iRet = 0 ;
    
    printf("Enter number of USD :\n");
    scanf("%d" , &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n" , iRet);
    
    return EXIT_SUCCESS;
}