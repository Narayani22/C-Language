#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
    struct node *prev;       // X
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;       // x

    if(*First == NULL)
    {
        *First = newn;
    }
    else 
    {
        newn->next = *First;
        (*First)->prev = newn;    // x
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;       // x

    if(*First == NULL)
    {
        *First = newn;
    }
    else 
    {
        while(temp-> != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;    // x
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked list are\n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    return 0;
}