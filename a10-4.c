#include<stdio.h>
double FhtoCs(float fTemp)
{
	double cel=0.0;
	cel=(fTemp-32)*5/9;
	return cel;
}
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Enter Temperature In Farheneit:\n");
	scanf("%f",&fValue);
	dRet=FhtoCs(fValue);
	printf("%lf",dRet);
	return 0;
}