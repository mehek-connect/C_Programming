#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary , int iYear)
{
    float fBonus = 0.0f;
    float fFinalSalary = 0.0f;

     if(fSalary <= 0 || iYear < 0)
     {
        printf("Invalid input\n");
     }
     else if(iYear <= 5)
     {
        fBonus = 5;
     }
     else if (iYear <= 10 )
     {
        fBonus = 10;
     }
     else
     {
        fBonus = 15;
     }
     if(fSalary > 0 && iYear >= 0)
     {
        fBonus = (fSalary*fBonus)/100;
        fFinalSalary = fSalary + fBonus;

        printf("Bonus amount is: %f\n", fBonus);
        printf("Total Salary is : %f\n" , fFinalSalary);
        
     }
}

int main()
{
    float fSalary = 0.0f;
    int iYear = 0;

    printf("Enter your monthly salary\n");
    scanf("%f" , &fSalary);

    printf("Enter your years of service\n");
    scanf("%d" , &iYear);

    CalculateBonus(fSalary ,iYear);

    return EXIT_SUCCESS;
}