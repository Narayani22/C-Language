#include<stdio.h>
#define TRUE 1	
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		if(iDigit==0)
		{
			return TRUE;
			break;
		}
		
	}
	
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("ENter Number:\n");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);
	if(bRet==TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("Their Is No Zero");
	}
	return 0;
}
