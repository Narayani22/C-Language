#include <stdio.h>
#include <stdlib.h>
int Maximum(int Arr[], int iLenght)
{
    int iCount = 0;
    int iMax = Arr[0];
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] > iMax)
        {
            iMax = Arr[iCount];
        }
    }
    return iMax;
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
    iRet = Maximum(p, iSize);
    printf("Maximum Number Is %d", iRet);
    return 0;
}
