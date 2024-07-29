// 5       #       4       #       3       #       2       #       1       #

#include <stdio.h>
void Pattern(int iNo)
{
    int iCount = 0;
    for (iCount = iNo; iCount > 0; iCount--)
    {
        printf("%d\t", iCount);
        printf("#\t");
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