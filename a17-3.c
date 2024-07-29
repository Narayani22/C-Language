#include <stdio.h>
#include <stdlib.h>
int Difference(int Arr[], int iLenght)
{
    int iCount = 0, iDiff = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] > iMax)
        {
            iMax = Arr[iCount];
        }
        if (Arr[iCount] < iMin)
        {
            iMin = Arr[iCount];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}
int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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
    iRet = Difference(p, iSize);
    printf("Difference Is %d", iRet);
    return 0;
}
