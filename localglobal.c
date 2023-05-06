#include<stdio.h>
int X = 10;
void Demo()
{
	int B = 30;
	printf("Value of B from : %d\n",B);
	printf("Value of X from : %d\n",X);
}
int main()
{
	int A = 20;
	printf("Value of A from : %d\n",A);
	printf("Value of X from : %d\n",X);
	Demo();
	return 0;
}