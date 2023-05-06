#include<stdio.h>
void Demo()
{
	auto int A = 10;
	A++;
	printf("Value from Demo is : %d\n",A);
}
void Hello()
{
	static int B = 21;
	B++;
	printf("Value from Demo is : %d\n",B);
}
int main()
{
	Demo();
	Hello();
	Hello();
	return 0;
}