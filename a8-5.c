#include<stdio.h>
void TableRev(int iNo)
{
	int i=0,mul=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=10;i>0;i--)
	{
		mul=iNo*i;
		printf("%d\t",mul);
	}
	
}
int main()
{
	int iValue=0;
	printf("ENter Number:\n");
	scanf("%d",&iValue);
	TableRev(iValue);
	return 0;
}