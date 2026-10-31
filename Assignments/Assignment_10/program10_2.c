#include<stdio.h>
#include<stdlib.h>

double RectArea(float flength , float fwidth)
{
  const float pi = 3.14;
  double dArea;

  dArea = flength*fwidth;

  return dArea;
}


int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter length:\n");
    scanf("%f", &fValue1);

    printf("Enter width:\n");
    scanf("%f", &fValue2);
    
    dRet = RectArea(fValue1 , fValue2);

    printf("Area of circle is  : %lf" , dRet);
    

    return EXIT_SUCCESS;
}
