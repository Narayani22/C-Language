#include<stdio.h>
int CountRange(int iNo)
{
	int Rem=0,Count=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		Rem=iNo%10;
		iNo=iNo/10;
		if(Rem>3&&Rem<7)
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
	iRet=CountRange(iValue);
	printf("%d",iRet);
	return 0;
}