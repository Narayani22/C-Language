#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <=iValue)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}