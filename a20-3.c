// A       A       A       A       A

// B       B       B       B       B

// C       C       C       C       C

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0;
    char cLetter = '\0';
    cLetter = 'A';
    for (iCount1 = 0; iCount1 < iRow; iCount1++)
    {
        for (iCount2 = 0; iCount2 < iColumn; iCount2++)
        {
            printf("%c\t", cLetter);
        }
        cLetter++;
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