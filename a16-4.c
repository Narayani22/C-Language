#include <stdio.h>
#include <stdlib.h>
void Range(int Arr[], int iLenght, int iStart, int iEnd)
{
    int iCount = 0;
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] >= iStart && Arr[iCount] <= iEnd)
        {
            printf("%d\t", Arr[iCount]);
        }
    }
}
int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0, iCnt = 0;
    int *p = NULL;
    printf("Enter The Number Of Elements:\n");
    scanf("%d", &iSize);
    printf("Enter The Starting Point:\n");
    scanf("%d", &iValue1);
    printf("Enter The Ending Point:\n");
    scanf("%d", &iValue2);
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
    Range(p, iSize, iValue1, iValue2);

    return 0;
}
