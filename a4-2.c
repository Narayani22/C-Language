#include<stdio.h>
void FactRev(int iNo)
{
	int i;
	for(i=iNo-1;i>0;i--)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
	}
	
	
}
int main()
{
	int iValue=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	FactRev(iValue);
	return 0;
}
