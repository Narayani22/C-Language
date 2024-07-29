#include<stdio.h>

void Display(char ch)
{
    char cCnt;
    if((ch >='a') && (ch<='z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c \t",cCnt);
        }
    }
    else if((ch >='A') && (ch<='Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c \t",cCnt);
        }   
    }
    else 
    {
        printf("Invalid Input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character: \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}