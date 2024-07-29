#include<stdio.h>
#include<stdlib.h>

// step 5 : perform the operation on array
int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
   
    for (iCnt = iSize-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }

        if(iCnt == -1)
        {
            return -1;           
        }
        else 
        {
            return iCnt;
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;
    
    // step 1 : Accept size of array
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);
    
    // steo 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // step 3 : Enter the elements of array
    printf("Please enter the numbers : \n");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the index of last Occurance : \n");
    scanf("%d",&iValue);
    // step 4 : call the function 
    iRet = CheckLastOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
       printf("There is no %d in the array\n",iValue);
    }
    else 
    {
        printf("%d is occured in the array at last index %d\n",iValue,iRet);    
    }
    // step 6 : Deallocate the memory 
    free(ptr);
    
    return 0;
}