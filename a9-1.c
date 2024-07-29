#include<stdio.h>
 void Display(int iNo)
 {
 	int i=0;
 	if(iNo<0)
 	{
 		iNo=-iNo;
	}
 	for(i=0;i<iNo;i++)
 	{
 		printf("*\t");
	}
	for(i=0;i<iNo;i++)
 	{
 		printf("#\t");
	}
 }
 
 int main()
 {
 	int iValue=0;
 	printf("Enter The Number:\n");
 	scanf("%d",&iValue);
 	Display(iValue);
 	return 0;
 }