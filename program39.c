#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("The Reverse order is : \n");
    printf("_____________________________________\n");
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n_____________________________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}