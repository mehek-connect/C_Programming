#include<stdio.h>
#include<stdlib.h>

void CheckEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Person is eligible to vote\n");
    }
    else
    {
        printf("Person is not eligible to vote\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    CheckEligibility(iAge);
    
    return EXIT_SUCCESS;
}