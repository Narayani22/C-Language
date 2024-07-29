#include<stdio.h>
void MultipleDisplay(int iNo)
{
	int i=0,mul=0;
	for(i=1;i<=5;i++)
	{
		mul=iNo*i;
		printf("%d\t",mul);
	}
	
}
int main()
{
	int iValue=0;
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}