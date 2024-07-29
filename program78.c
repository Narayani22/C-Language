#include<stdio.h>
#include<stdlib.h>

// step 5 : perform the operation on array
int CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
   
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    printf("Enter the element to findout the frequency : \n");
    scanf("%d",&iValue);
    // step 4 : call the function 
    iRet = CalculateFrequency(ptr, iLength, iValue);

    printf("Frequency of %d is %d\n",iValue,iRet);

    // step 6 : Deallocate the memory 
    free(ptr);
    
    return 0;
}