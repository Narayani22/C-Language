#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter The Number:\n");
    scanf("%d",&iValue);
    bRet=check(iValue);
    if(bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
return 0;
}