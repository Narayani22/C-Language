#include<stdio.h>

int main()
{
    int i = 0;

    printf("_________________\n");
    printf("ASCII table\n");
    printf("_________________\n");

    printf("Character\t Decimal\t Hex\t Octal");

    for(i = 0; i<=127; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }
    printf("____________________\n");

    return 0;
}