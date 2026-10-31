#include<stdio.h>
#include<stdlib.h>

double SquareMeter(double dSqFeet)
{
  double dSqMeter = 0.0;

  dSqMeter = (0.0929 * dSqFeet);

  return dSqMeter;

}


int main()
{
    int iValue = 0 ; 
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    
    dRet = SquareMeter(iValue);

    printf("Area in square meter is  : %f" , dRet);
    

    return EXIT_SUCCESS;
}
