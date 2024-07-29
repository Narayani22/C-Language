// 1       2       3       4

// 1       *       *       4

// 1       *       *       4

// 1       2       3       4

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;
    for (iCount1 = 1; iCount1 <= iRow; iCount1++)
    {
        for (iCount2 = 1; iCount2 <= iColumn; iCount2++)
        {

            if ((iCount1 < iRow && iCount1 > 1) && (iCount2 < iColumn && iCount2 > 1))
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t", iCount2);
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number Of Rows And Columns:\n");
    scanf("%d%d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}
