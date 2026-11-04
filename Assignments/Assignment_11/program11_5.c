#include<stdio.h>
#include<stdlib.h>

void DisplayRangeRev(int iStart , int iEnd)
{
  int iCnt = 0 , iSum = 0;

   for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
   {
    printf("%d\n", iCnt);
}

}

int main()
{
    int iValue1 = 0, iValue2 = 0 ;

    printf("Enter starting point\n");
    scanf("%d" , &iValue1);

    printf("Enter ending point\n");
    scanf("%d" , &iValue2);

    DisplayRangeRev(iValue1 , iValue2);

    return EXIT_SUCCESS;
}
