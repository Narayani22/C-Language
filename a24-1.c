#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("___________________________________\n");
    printf("ASCII table\n");
    printf("___________________________________\n");

    printf("Character\t Decimal\t Hex\t Octal\n");

    for(i = 0; i<=127; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }
    printf("___________________________________\n");
}

int main()
{
    DisplayASCII();

    return 0;
}