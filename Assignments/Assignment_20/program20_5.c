#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 0; i <= iRow; i++)
    {
        for(j = 0; j <= iCol; j++)
        {
            if(i == 0 || i == iRow ||
               j == 0 || j == iCol || i == j)
            {
                printf("%d  ", j + 1);
            }
            else
            {
                printf("   ");
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