#include <stdio.h>
void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
    else
    {
        int i = 1, iCnt = 1;
        while (iCnt <= iNo)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", i);
                iCnt++;
            }
            i++;
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter The Number:\n");
    scanf("%d", &iValue);
    PrintEven(iValue);

    return 0;
}