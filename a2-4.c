#include <stdio.h>
void Display(int iNo, int iFrequency)
{
    int i = 0;
    for (i = 0; i < iFrequency; i++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter The Number:\n");
    scanf("%d", &iValue);
    printf("Enter The Frequency:\n");
    scanf("%d", &iCount);
    Display(iValue, iCount);

    return 0;
}