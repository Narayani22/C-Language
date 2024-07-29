 #include<stdio.h>
int FactDiff(int iNo)
{
	int SumFact=0;
	int SumNonFact=0;
	int diff=0;
	int i;
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			SumFact=SumFact+i;
		}
		if(iNo%i==0)
		{
			SumNonFact=SumNonFact+i;
		}
		
	}
	diff=SumNonFact-SumFact;
	return diff;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}
