#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0,iEvenCnt = 0, iOddCnt = 0;
    
    if(iNo == 0) //Filter
    {
        printf("Number of even digits are : 1");
        printf("Number of Odd digits are : 0");
        return;
    }

    if(iNo < 0) // Updator
    {
        iNo = -iNo;
    }
        
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Number of even digits are : \n",iEvenCnt);
    printf("Number of Odd digits are : \n",iOddCnt);
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);

    return 0;
}