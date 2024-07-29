#include<stdio.h>

int CountFreqqency(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++; 
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
 
    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountFreqqency(Arr, 'a');

    printf("Fequency of  letters is : %d\n",iRet);

    return 0;
}