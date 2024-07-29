#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
	int i=0,sum=0;
	if(iStart>iEnd||iStart<0)
	{
		return 0;
	}
	else
	{
		for(i=iStart;i<=iEnd;i++)
		{
			sum=sum+i;			
		}
		return sum;
	}
	
}
int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("Enter The Starting Point\n");
	scanf("%d",&iValue1);
	printf("Enter The Ending Point\n");
	scanf("%d",&iValue2);
	iRet=RangeSum(iValue1,iValue2);
	if(iRet==0)
	{
		printf("Invalid Range");
	}
	else
	{
		printf("Addition Is %d",iRet);		
	}
	
	return 0;
	
}