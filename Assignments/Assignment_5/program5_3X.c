#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    int iGrade = 0;

    if(fMarks >= 90)
    {
        iGrade = 1;
    }
    else if(fMarks >= 75)
    {
        iGrade = 2;
    }
    else if(fMarks >= 60)
    {
        iGrade = 3;
    }
    else if(fMarks >= 40)
    {
        iGrade = 4;
    }
    else
    {
        iGrade = 5;
    }
    
    switch(iGrade)
    {
        case 1:
        printf("Grade A\n");
        break;

        case 2:
        printf("Grade B\n");
        break;

        case 3:
        printf("Grade C\n");
        break;

        case 4:
        printf("Grade D\n");
        break;

        case 5:
        printf("Fail\n");
        break;
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