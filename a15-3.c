#include <stdio.h>
#include <stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength)
{
    int iCount = 0;
    for (iCount = 0; iCount < iLength; iCount++)
    {
        if (Arr[iCount] == 11)
        {
            return TRUE;
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : \n ");
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

    bRet = Check(p, iSize);
    if (bRet == TRUE)
    {
        printf("11 Is Present");
    }
    else
    {
        printf("11 Is Not Present");
    }

    free(p);

    return 0;
}