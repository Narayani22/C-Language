#include<stdio.h>
 void Display(int iNo)
 {
 	int i=0;
 	for(i=1;i<=iNo;i++)
 	{
 		printf("%d\t",i);
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