// 4       4       4       4       4

// 3       3       3       3       3

// 2       2       2       2       2

// 1       1       1       1       1

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;

    for (iCount1 = iRow; iCount1 > 0; iCount1--)
    {
        for (iCount2 = iColumn; iCount2 > 0; iCount2--)
        {
            printf("%d\t", iCount1);
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