// A       B       C       D

// a       b       c       d

// A       B       C       D

// a       b       c       d

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;
    char cLetter1 = 0, cLetter2 = 0;
    for (iCount1 = 0; iCount1 < iRow; iCount1++)
    {
        cLetter1 = 'A';
        cLetter2 = 'a';
        for (iCount2 = 0; iCount2 < iColumn; iCount2++)
        {
            if (iCount1 % 2 == 0)
            {
                printf("%c\t", cLetter1);
                cLetter1++;
            }
            else
            {
                printf("%c\t", cLetter2);
                cLetter2++;
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