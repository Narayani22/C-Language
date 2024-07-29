#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
	int i=0;
	if(iStart>iEnd)
	{
		printf("Invalid Range");
	}
	else
	{
		for(i=iStart;i<=iEnd;i++)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
			}
			
		}
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter The Starting Point\n");
	scanf("%d",&iValue1);
	printf("Enter The Ending Point\n");
	scanf("%d",&iValue2);
	RangeDisplayEven(iValue1,iValue2);
	return 0;
	
}