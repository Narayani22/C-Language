#include<stdio.h>
int MultDigits(int iNo)
{
	int Rem=0,Mul=1;
	if(iNo==0)
	{
		return 0;
	}
	else
	{
	  while(iNo!=0)
      {
		Rem=iNo%10;
		iNo=iNo/10;
		if(Rem!=0)
		{
		  Mul=Rem*Mul;
		}
		
		
	}
      return Mul;	
	}
	
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	iRet=MultDigits(iValue);
	printf("%d",iRet);
	return 0;
}