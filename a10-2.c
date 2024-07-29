#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
	double Area=0.0;
	Area=fWidth*fHeight;
	return Area;
}
int main()
{
	float fValue1=0.0,fValue2=0;
	double dRet=0.0;
	printf("Enter Width:\n");
	scanf("%f",&fValue1);
	printf("Enter Height:\n");
	scanf("%f",&fValue2);
	dRet=RectArea(fValue1,fValue2);
	printf("The Area Of Rectangle Is %lf",dRet);
	return 0;
}