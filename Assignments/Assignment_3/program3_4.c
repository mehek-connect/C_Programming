#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo ;i++)
    {
         if((i % 2 == 0) && (i <= iNo))
        {
            printf("%d\t",i);
        }
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d" , &iValue);

    DisplayEvenFactor(iValue);

    

    return EXIT_SUCCESS;
}