#include <stdio.h>
#include <stdlib.h>
void Digits(int Arr[], int iLenght)
{
    int iDigit = 0, iCount = 0, iTemp = 0;
    ;
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        iDigit = 0;
        iTemp = Arr[iCount];
        while (iTemp != 0)
        {
            iTemp = iTemp / 10;
            iDigit++;
        }
        if (iDigit == 3)
        {
            printf("%d\t", Arr[iCount]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    printf("Enter The Number Of Elements:\n");
    scanf("%d", &iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }
    printf("Enter %d Elements", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    Digits(p, iSize);

    return 0;
}
