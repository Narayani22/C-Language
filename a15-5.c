#include <stdio.h>
#include <stdlib.h>
int Frequency(int Arr[], int iLenght, int iNo)
{
    int iCount = 0, iFreq = 0;

    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;
    printf("Enter The Number Of Elements:\n");
    scanf("%d", &iSize);
    printf("Enter The Number:\n");
    scanf("%d", &iValue);
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
    iRet = Frequency(p, iSize, iValue);
    printf("Result Is %d", iRet);
    free(p);

    return 0;
}