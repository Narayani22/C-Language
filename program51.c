#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit = 0;
    int iCnt = 0;
    
    if(iNo == 0) // Filter
    {
        return 1;
    }
    // Filter will run the '0' number also.
    
    if(iNo < 0) // Updator
    {
        iNo = -iNo;
    }
    // updator will run both negative and positive numbers.
    
    while(iNo > 0)// negative no cant go inside the loop because it is less than 0.
    {
       // iDigit =iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d",iRet);

    return 0;
}