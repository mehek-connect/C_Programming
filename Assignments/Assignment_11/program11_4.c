#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart , int iEnd)
{
  int iCnt = 0 , iSum = 0;

   for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
   {
    if((iCnt % 2) == 0)
    {
    printf("%d\n",iCnt);
    iSum = iSum + iCnt;
    }
     
   }
   return iSum;
}


int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet = 0;

    printf("Enter starting point\n");
    scanf("%d" , &iValue1);

    printf("Enter ending point\n");
    scanf("%d" , &iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);

    printf("Addition is : %d\n", iRet);

    return EXIT_SUCCESS;
}
