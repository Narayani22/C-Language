#include<stdio.h>
int CountDiff(int iNo)
{
	int iDigit=0;
	int SumEven=0,SumOdd=0;
	int Diff=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit%2==0)
		{
			SumEven=SumEven+iDigit;
		}
		else
		{
		  SumOdd=SumOdd+iDigit;
		}
	}
	Diff=SumEven-SumOdd;
	return Diff;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}