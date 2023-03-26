#include <stdio.h>
#include <stdlib.h>

/* structure representing a node of the doubly linked list */
struct node
{
     int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

void insert(int);
void delete(int);
void display();

int main()
{
    int n, ch;
            printf("\n\n***Operations on doubly linked list***");

    do
    {
        printf("\n1. Insert \n2.delete\n3.Display \n4.Exit\n");
        printf("\nEnter Choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insert(n);
                break;
            case 2:
            	printf("\nEnter number to delete: ");
                scanf("%d", &n);
                delete(n);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }while (ch != 4);
}

/* adds a new node at the end of the doubly linked list */
void insert(int num)
{
    struct node *nptr,  *temp = start;

    /*create a new node */
    nptr = malloc(sizeof(struct node));
    nptr->data = num;
    nptr->next = NULL;
    nptr->prev = NULL;

    /* if the linked list is empty */
    if (start == NULL)
    {
        start = nptr;
    }
    else
    {
        /* traverse the linked list till the last node is reached */
        while (temp->next != NULL)
            temp = temp->next;

        nptr->prev = temp;
        temp->next = nptr;
    }
}




/* deletes the specified node from the doubly linked list */
void delete(int num)
{
    struct node *temp = start;

    /* traverse the entire linked list */
    while (temp != NULL)
    {
        /* if node to be deleted is found */
        if (temp->data == num)
        {
            /* if node to be deleted is the first node */
            if (temp == start)
            {
                start = start->next;
                start->prev = NULL;
            }
            else
            {
                /* if node to be deleted is the last node */
                if (temp->next == NULL)
                    temp->prev->next = NULL;
                else
                /* if node to be deleted is any intermediate node */
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                free(temp);
            }
            printf("Successfully deleted\n");
            return ; /* return back after deletion */
        }
        temp = temp->next; /* go to next node */
    }
    printf("\n%d not found.", num);
}

/* displays the contents of the linked list */
void display()
{
	struct node *temp = start;
    printf("\n");

    /* traverse the entire linked list */
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

