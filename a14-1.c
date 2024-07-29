#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int SumEven = 0, SumOdd = 0, iCount = 0, iDiff = 0;
    for (iCount = 0; iCount < iLength; iCount++)
    {
        if (Arr[iCount]% 2 == 0)
        {
            SumEven = SumEven + Arr[iCount];
        }
        else
        {
            SumOdd = SumOdd + Arr[iCount];
        }
    }
    iDiff = SumEven - SumOdd;
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d", iRet);

    free(p);

    return 0;
}