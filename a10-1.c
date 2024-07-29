#include<stdio.h>
double CircleArea(float fRadius)
{
	double Area=0.0;
	float PI=3.14;
	Area=PI*fRadius*fRadius;
	return Area;
}
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Enter Radius:\n");
	scanf("%f",&fValue);
	dRet=CircleArea(fValue);
	printf("The Area Of Circle Is %lf",dRet);
	return 0;
}