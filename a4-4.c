 #include<stdio.h>
int SumNonFact(int iNo)
{
	int sum=0,i;
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			sum=sum+i;
		}
	}
	return sum;
	
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=SumNonFact(iValue);
	printf("%d",iRet);
	return 0;
}
