#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
  int iMeter = 1000;
  int iAns = 0;

  iAns = iNo*iMeter;

  return iAns;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter distance:\n");
    scanf("%d", &iValue);

    
    iRet = KMtoMeter(iValue);

    printf("Distance in meters is  : %d" , iRet);
    

    return EXIT_SUCCESS;
}
