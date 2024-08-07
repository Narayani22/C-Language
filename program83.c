#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize) //5
{
    int iMin = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++) //N
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet =0;

    printf("Enter the number of elements : \n"); //1
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength); //2

    printf("Enter the elements : \n");
    for(i = 0; i<iLength;i++) //3
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Minimum(ptr,iLength); //4

    printf("Minimum number is : %d\n",iRet);

    free(ptr); //6

    return 0;
}