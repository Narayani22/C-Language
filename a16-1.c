// sum of digits in c?
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #define TRUE 1
// #define FALSE 0
// typedef int BOOL;
bool Check(int Arr[], int iLenght, int iNo)
{
    int iCount = 0;
    for (iCount = 0; iCount < iLenght; iCount++)
    {
        if (Arr[iCount] == iNo)
        {
            return true;
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    int *p = NULL;
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
    bRet = Check(p, iSize, iValue);
    if (bRet == true)
    {
        printf("Number Is Present");
    }
    else
    {
        printf("Number Is Not Present");
    }

    return 0;
}
