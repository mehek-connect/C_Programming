#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(int iAge1 , float fMarks1)
{
    if (iAge1 >= 17 && fMarks1 >= 60)
    {
        printf("Student admitted\n");
    }
    else if(iAge1 <= 0 || fMarks1 <= 0 )
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Student rejected\n");
    }
}
int main()
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your age\n");
    scanf("%d" , &iAge);

    printf("Enter your marks\n");
    scanf("%f" , &fMarks);

    CheckAdmission(iAge , fMarks);

    return EXIT_SUCCESS;

}