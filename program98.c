/*  4
    a   b   c   d
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    if(iNo<0)  // updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <=iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }

    printf("\n"); 
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("The reverse order is : \n");
    Display(iValue);

    return 0;
}