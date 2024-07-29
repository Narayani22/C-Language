#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// step 5 : perform the operation on array
Bool CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
   
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
        if(iFrequency == 0)
        {
            return false;           
        }
        else 
        {
            return true;
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = 0;
    
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

    printf("Enter the element to findout the Occurance : \n");
    scanf("%d",&iValue);
    // step 4 : call the function 
    bRet = CheckOccurance(ptr, iLength, iValue);
    if(bRet == true)
    {
        printf("%d is occured in the array\n",iValue);
    }
    else 
    {
        printf("There is no %d in the array\n",iValue);
    }

    // step 6 : Deallocate the memory 
    free(ptr);
    
    return 0;
}