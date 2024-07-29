// not a good programming practice for beginners because of complexity.

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {        
        iSum = iSum + (iNo % 10);
        iNo /= 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet =0;
    printf("Enter number : \n ");
    scanf("%d",&iValue);

    iRet= SumDigits(iValue);

    printf("Summation of digits : %d\n",iRet);

    return 0;
}