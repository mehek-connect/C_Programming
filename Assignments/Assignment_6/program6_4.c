#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckTriangle(int iSide1 , int iSide2 , int iSide3)
{
    if ( iSide1 > 0 && iSide2 > 0 && iSide3 > 0 && (iSide1 + iSide2 > iSide3) && (iSide2 + iSide3 > iSide1) && (iSide1 + iSide3 > iSide2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    int iSide1 = 0 , iSide2 = 0, iSide3 = 0 , bRet = FALSE;

    printf("Enter three sides of a triangle\n");
    scanf("%d%d%d" , &iSide1 ,&iSide2 , &iSide3 );

    bRet = CheckTriangle(iSide1 , iSide2 , iSide3);

    if(bRet == TRUE)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return EXIT_SUCCESS;
}