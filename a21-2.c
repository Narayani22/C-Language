// 2       4       6       8       10

// 1       3       5       7       9

// 2       4       6       8       10

// 1       3       5       7       9

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;
    for (iCount1 = 0; iCount1 < iRow; iCount1++)
    {
        for (iCount2 = 1; iCount2 <= iColumn; iCount2++)
        {
            if (iCount1 % 2 != 0)
            {
                printf("%d\t", (iCount2 * 2) - 1);
            }
            else
            {
                printf("%d\t", 2 * iCount2);
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
