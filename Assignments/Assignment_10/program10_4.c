#include<stdio.h>
#include<stdlib.h>

double FhToCs(float fTemp)
{
  float fCelcius = ((fTemp-32)*(5.0/9.0));

  return fCelcius;
}


int main()
{
    float fValue = 0.0f ; 
    double dRet = 0.0;

    printf("Enter temperature in F:\n");
    scanf("%f", &fValue);

    
    dRet = FhToCs(fValue);

    printf("Temperature in Cs is  : %f" , dRet);
    

    return EXIT_SUCCESS;
}
