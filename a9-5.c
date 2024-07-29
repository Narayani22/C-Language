#include<stdio.h>
int FactorialDiff(int iNo)
{
	int i=0;
	int FactEven=1,FactOdd=1;
	int FactDiff=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		if(i%2!=0)
		{
			FactOdd=FactOdd*i;
		}
		
	}
	for(i=1;i<=iNo;i++)
	{
		if(i%2==0)
		{
			FactEven=FactEven*i;
		}
		
	}
	FactDiff=FactEven -FactOdd;
	return FactDiff;
	
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter The Number\n");
	scanf("%d",&iValue);
	iRet=FactorialDiff(iValue);
	printf("Difference Between Even Factorial And Odd Factorial Is %d",iRet);
	return 0;
}