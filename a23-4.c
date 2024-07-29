#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >='a') && (ch<='z'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);
    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else 
    {
        printf("It is not a Small case Character");
    }
    return 0;
}