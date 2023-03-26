#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insert();
void delete();
void display();
void main()
{

int ch;
do
  {
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    printf("\n Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
          case 1:insert();
                 break;
          case 2:delete();
                 break;
          case 3: display();
                 break;
          case 4:exit(0);
     }
  } while (ch!=4);
}
void insert()
{
   int new_data;
   struct node *ptr,*prev,*temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("\n Enter the new element:\n");
   scanf("%d",&new_data);
   temp->data=new_data;
   temp->next=NULL;
     if (head==NULL)
     {
          head=tail=temp;
          temp->next=head;
      }
      else
      {
          tail->next=temp;
          tail=temp;
      }
 }
void delete()
{
 struct node *ptr,*prev,*delnode;
 int elt;
  printf("\n Enter the enrollment number to be deleted \n");
  scanf("%d",&elt);
if (head==NULL)
 {
  printf("\n No elements in the list \n");
  return;
 }
else
{
  if
    (head->data==elt)
     {
           delnode=head;
           if (head==tail)
           head=tail=NULL;
           else
           {
           head=head->next;
           tail->next=head;
           }
     }
   else if (tail->data==elt)
    {
      for(ptr=head;(ptr!=tail);prev=ptr,ptr=ptr->next);
      delnode=tail;
      tail=prev;
      tail->next=head;
    }
   else
    {
    for(prev=ptr=head;(ptr->data!=elt)&&(ptr!=tail);
prev=ptr,ptr=ptr->next);
    if(ptr->data==elt)
    {
       delnode=ptr;
       prev->next=ptr->next;
       printf("yes...");
    }
    else
    {
      printf("Given element not found in the list");
      getch();
      return;
     }
    }
   }
   free(delnode);
}
void display()
{
 struct node *ptr,*prev=NULL;
    if (head==NULL)
   {
    printf("\n No records to view\n");
    return;
    }
    printf("\n The elements in the circular list are\n");
    for (ptr=head;prev!=tail;prev=ptr,ptr=ptr->next)
    printf("\n\n  %d",ptr->data);
    getch();
}
