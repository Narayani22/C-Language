#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 Allocate memory
    
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) // If linked list is empty
    {
        *First = newn;
    }
    else // if linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 Allocate memory
    
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) // If linked list is empty
    {
        *First = newn;
    }
    else // if linked list contains atleast one node
    {
        
    }
}

void Display(PNODE First)
{
    printf("Elelments from the Linked list are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf(" NULL \n");
}

int main()
{
    // struct node * Head = NULL;
    PNODE Head = NULL;

    InsertFirst(&Head, 51); // InsertFirst(60,51)
    InsertFirst(&Head, 21); // InsertFirst(60,21)
    InsertFirst(&Head, 11); // InsertFirst(60,11)

    Display(Head);

    return 0;
}

/*
    // Call by Address

    InsertFirst()
    InsertLast()
    InsertatPosition()

    DeleteFirst()
    DeleteLast()
    DeleteatPosition()

    // Call by Value
    Display()
    Count()
*/