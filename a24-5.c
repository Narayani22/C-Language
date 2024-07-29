#include<stdio.h>

void Display(char ch)
{
    if((ch >='a') && (ch<='z') || (ch >='A') && (ch<='Z'))
    {
        printf("Decimal: %d \t Hexadecimal: %x \t Octal : %o\t",ch,ch,ch);
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