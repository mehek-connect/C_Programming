#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRow, iCol;

    printf("Enter number of rows: ");
    scanf("%d", &iRow);

    printf("Enter number of columns: ");
    scanf("%d", &iCol);

    Pattern(iRow, iCol);

    return EXIT_SUCCESS;
}