//  *   *   *   *

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;       // auto storage class

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;        // static storage class

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     // Recursive Call
    }
}

int main()
{
    DisplayR();

    return 0 ;
}