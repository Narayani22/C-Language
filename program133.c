#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter the full name: \n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}