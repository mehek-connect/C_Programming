#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
  const float pi = 3.14;
  double dArea;

  dArea = pi*fRadius*fRadius;

  return dArea;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f", &fValue);
    
    dRet = CircleArea(fValue);

    printf("Area of circle is  : %lf" , dRet);
    

    return EXIT_SUCCESS;
}
