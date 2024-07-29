#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    // logic 
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);
    
    if(bRet == true)
    {
        printf("4th bit is on\n");
    }
    else
    {
        printf("4th bit is off\n");
    }

    return 0;
}