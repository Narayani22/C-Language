#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++; 
    }
    return bFlag;
}

int main()
{
    char Arr[10];
    char cValue = '\0';
    bool bRet = 0;
 
    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = CountFreqqency(Arr, cValue);
    if(bRet == true)
    {
        printf("Character is present in the string");
    }
    else
    {
        printf("Character is not present in the string");
    }

    return 0;
}