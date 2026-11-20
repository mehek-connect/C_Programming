#include<stdio.h>
#include<stdlib.h>

void DisplayTime(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Exam timing is 7:00 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Exam timing is 8:30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Exam timing is 9:20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Exam timing is 10:30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf("%c", &cValue);

    DisplayTime(cValue);

    return EXIT_SUCCESS;
}