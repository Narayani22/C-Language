/* 4
    1   *   2   *   3   *   4   *
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)  // updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);  // dynamic
        printf("*\t");   // static
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("The reverse order is : \n");
    Display(iValue);

    return 0;
}