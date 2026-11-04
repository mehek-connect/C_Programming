#include<stdio.h>
#include<stdlib.h>

float Percentage(float fTotal, float fObtained)
{
    float fPer = 0.0f;

    fPer = (fObtained / fTotal) * 100;

    return fPer;
}

int main()
{
    float fTotal = 0.0f;
    float fObtained = 0.0f;
    float fRet = 0.0f;

    printf("Enter total marks:\n");
    scanf("%f", &fTotal);

    printf("Enter obtained marks:\n");
    scanf("%f", &fObtained);

    if(fTotal <= 0 || fObtained < 0 || fObtained > fTotal)
    {
        printf("Invalid marks\n");
    }
    else
    {
        fRet = Percentage(fTotal, fObtained);

        printf("Percentage is: %.2f%%\n", fRet);
    }

    return EXIT_SUCCESS;
}
