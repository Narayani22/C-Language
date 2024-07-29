#include<stdio.h>
void Table(int iNo)
{
	int i=0,mul=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=10;i++)
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
	Table(iValue);
	return 0;
}