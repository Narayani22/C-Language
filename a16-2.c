#include <stdio.h>
#include <stdlib.h>
int FirstOcc(int Arr[], int iLenght, int iNo)
{
    int iCount = 0;
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] == iNo)
        {
            return iCount;
        }
    }
    return -1;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    printf("Enter The Number Of Elements:\n");
    scanf("%d", &iSize);
    printf("Enter The Number\n");
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
    iRet = FirstOcc(p, iSize, iValue);
    if (iRet == -1)
    {
        printf("Their Is No Such Number");
    }
    else
    {
        printf("First Occurence Of Number is %d", iRet);
    }
    free(p);

    return 0;
}
