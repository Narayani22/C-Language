#include<stdio.h>
int EvenFactorial(int iNo)
{
	int i=0,fact=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		if(i%2!=0)
		{
			fact=fact*i;
		}
		
	}
	return fact;
	
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter The Number\n");
	scanf("%d",&iValue);
	iRet=EvenFactorial(iValue);
	printf("Odd Factorial Of Number Is %d",iRet);
	return 0;
}