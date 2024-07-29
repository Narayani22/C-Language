#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // LOGIC
}

void Display(PNODE First)
{
    //Logic
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}


/*
    void InsertFirst(PPNODE First, int no)
    void InsertLast(PPNODE Last,int no)
    void InsertAtPos(PPNODE Pos,int no,int pos)

    void DeleteFirst(PPNODE First)
    void DeleteLast(PPNODE First)
    void DeleteAtPos(PPNODE First, int Pos)

    void Display(PNODE First)
    int Count(PNODE First)
*/
//////////////////////////////////////////////
/*
    InsertFirst(&Head,11)
    InsertLast(&Head,11)
    InsertAtPos(&Head11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head, 5)

    Display(Head)
    Count(Head)
*/

/*
    Topics to read from C programming for Data structures

    premitive datatypes
    size of all data types
    loops
    dynamic memory 
    call by value and call bt address
    structure declaration
    pointer and its types
    pointer to pointer
    memory allocation of structure
    direct and indreact accsing of structure
*/