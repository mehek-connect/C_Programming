#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
   if (fMarks >= 90)
   {
    printf("A grade\n");
   }
   else if (fMarks >= 75)
   {
    printf("B grade\n");
   }
   else if (fMarks >= 60)
   {
    printf("C grade\n");
   }
   else if (fMarks >= 40)
   {
    printf("D grade\n");
   }
   else
   {
    printf("Fail\n");
   }
    
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter your marks : \n");
    scanf("%f" , &fMarks);

    DisplayGrade(fMarks);
    
    return EXIT_SUCCESS;
}