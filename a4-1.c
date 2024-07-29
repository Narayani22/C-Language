#include<stdio.h>
int MultFact(int iNo)
{
	int mul=1,i;
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			mul=mul*i;
		}
	}
	return mul;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=MultFact(iValue);
	printf("%d",iRet);
	return 0;
}
