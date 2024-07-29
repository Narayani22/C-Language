#include<stdio.h>
int DollarToINR(int iNo	)
{
	int INR=0;
	INR=iNo*70;
	return INR;	
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number Of USD\n");
	scanf("%d",&iValue);
	iRet=DollarToINR(iValue);
	printf("Value In INR Is %d",iRet);
	return 0;
}