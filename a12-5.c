#include<stdio.h>
int Count(int iNo)
{
	int iDigit=0,Freq=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit<6)
		{
			Freq++;
		}
	}
	return Freq;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	iRet=Count(iValue);
	printf("%d",iRet);
	return 0;
}