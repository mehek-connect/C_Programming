#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo >= 0)
    {
        printf("It is positive number\n");
    }

    else
    {
        printf("It is not positive\n"); 
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}