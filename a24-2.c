#include<stdio.h>

void Display(char ch)
{
    if((ch >='a') && (ch<='z'))
    {
        ch = ch -32;
        printf("%c",ch);
    }
    else if((ch >='A') && (ch<='Z'))
    {
        ch = ch +32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}