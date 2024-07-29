#include<stdio.h>
int CountFour(int iNo)
{
	int iDigit=0,Count=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit==4)
		{
			Count++;
		}
	}
	return Count;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	iRet=CountFour(iValue);
	printf("%d",iRet);
	return 0;
}