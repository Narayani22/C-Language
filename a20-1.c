//  A       B       C       D

// A       B       C       D

// A       B       C       D

// A       B       C       D

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;
    char Letter = 0;
    for (iCount1 = 0; iCount1 < iRow; iCount1++)
    {
        Letter = 'A';
        for (iCount2 = 0; iCount2 < iColumn; iCount2++)
        {
            printf("%c\t", Letter);
            Letter++;
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