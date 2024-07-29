// A       B       C       D       E

#include <stdio.h>
void Pattern(int iNo)
{
    char iCount = 0;
    // for (iCount = 'A'; iCount < iNo + 'A'; iCount++)
    // {
    //     printf("%c\t", iCount);
    // }
    for (iCount = 65; iCount < iNo + 65; iCount++)
    {
        printf("%c\t", iCount);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number Of Elements:\n");
    scanf("%d", &iValue);
    Pattern(iValue);

    return 0;
}