#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;
int count = 0;
void insert(int);
void delete();
void display();

void main()
{
   int choice, value;

   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   count++;
   printf("\nInsertion is Success!!!\n");
}

void delete()
{
    struct Node *temp = front;

    if (temp == NULL)
    {
        printf("\nError: Trying to display elements from empty queue");
        return;
    }
    else
        if (temp->next != NULL)
        {
            temp = temp->next;
            printf("\nDeleted value : %d", front->data);
            free(front);
            front = temp;
        }
        else
        {
            printf("\nDeleted value : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
void display()
{
    struct Node *temp = front;


    if ((temp == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (temp != rear)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    if (temp == rear)
        printf("%d", temp->data);
}
