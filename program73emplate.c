#include<stdio.h>
#include<stdlib.h>

// step 5 : perform the operation on array
//________ _________(int Arr[], int iSize)
//{
    //logic
//}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;
    
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

    // step 4 : call the function 
    //_________ = ____________ (ptr, iLength);

    // step 6 : Deallocate the memory 
    free(ptr);
    
    return 0;
}