#include<stdio.h>
int Factorial(int iNo)
{
	int fact=1,i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	iRet=Factorial(iValue);
	printf("Factorial Of Number Is %d",iRet);
	return 0;
}