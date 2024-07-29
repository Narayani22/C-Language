//  #       1       *       #       2       *       #       3       *       #       4       *

#include <stdio.h>
void Pattern(int iNo)
{
    int iCount = 0;
    for (iCount = 0; iCount < iNo; iCount++)
    {
        printf("#\t");
        printf("%d\t", iCount + 1);
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number Of Elements:\n");
    scanf("%d", &iValue);
    Pattern(iValue);

    return 0;
}