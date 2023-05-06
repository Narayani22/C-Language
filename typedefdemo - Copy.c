#include<stdio.h>

// typedef ODD_NAME  NEW_NAME

typedef int INTEGER;
typedef unsigned long int ULONG;

struct Demo
{
    int a;
    int b;
};

typedef struct Demo Demo;
typedef Struct Demo * PDEMO;

int main()
{
    INTEGER i = 10; // int i = 10;
    ULONG j = 21;   // unsigned long int j=21;
    Demo obj;  // struct Demo obj;
    PDEMO ptr = &obj;  // struct Demo * ptr = &obj;
    
    return 0;
}