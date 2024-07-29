#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A')
    {
        printf("7 AM");
    }
    else if (chDiv == 'D')
    {
        printf("10.30 AM");
    }
    else if (chDiv == 'C')
    {
        printf("9.20 AM");
    }
    else if (chDiv == 'B')
    {
        printf("8.30 AM");
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision:\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}