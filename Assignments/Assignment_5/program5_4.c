#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if ((iNo % 3) == 0 && (iNo % 5 == 0))
    {
        printf("Divisible by 3 and 5\n");
    }
    else if ((iNo % 3) == 0)
    {
        printf("Divisible by 3 \n");
    }
   
    else if((iNo % 5) == 0)
    {
        printf("Not divisible by 5\n");
    }
    else
    {
        printf("Divisible by neither\n");
    }


}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    CheckMultipleDivisibility(iValue);
    
    return EXIT_SUCCESS;
}