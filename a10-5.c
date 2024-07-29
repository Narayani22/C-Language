#include<stdio.h>
double SquareMeter(int iValue)
{
	double Smeter=0.0;
	Smeter=iValue*0.092903;
	return Smeter;
}
int main()
{
	int iValue=0;
	double dRet=0.0;
	printf("Enter Area In Square Feet:\n");
	scanf("%d",&iValue);
	dRet=SquareMeter(iValue);
	printf("%lf",dRet);
	return 0;
}