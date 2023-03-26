//creating doubly linked list
#include <stdio.h> //header files
#include <conio.h>
#include <stdlib.h>

typedef struct student {
    int rollno;
    int contact;
    struct student *next;
    struct student *prev;
    };


    struct student *start=NULL;
    struct student *current=NULL;
    struct student *last=NULL;

void createnode()
{
    struct student *temp;
    if (start==NULL)
    {
    temp=(struct student*)malloc(sizeof(struct student));
    printf("\n Enter rollno-");
    scanf("%d", &temp->rollno);
    printf("\n Enter contact no-");
    scanf("%d", &temp->contact);
    temp->next=NULL;
    temp->prev=NULL;
    start= temp;
    last=temp;
    }
    else
    {
    temp=(struct student*)malloc(sizeof(struct student));
    printf("\n Enter rollno-");
    scanf("%d", &temp->rollno);
    printf("\n Enter contact no-");
    scanf("%d", &temp->contact);
    current=start;
    while(current->next!=NULL)
    {
        current =current->next;
    }
    current->next=temp;
    temp->prev=current;
    temp->next=NULL;
    last=temp;

    }
}

void displaylist()
{
    struct student *temp;
    current=start;
    printf("\n List from left to right direction \n");
    while(current!=NULL)
    {
        printf(" rollno= %d contact no= %d\n",current->rollno,current->contact);
        temp=current;
        current=current->next;

    }
    /*current =temp;*/

    printf("\n print list in right to left direction");
    do
    {
        printf(" rollno= %d contact no= %d\n",current->rollno,current->contact);
        current=current->prev;
    }while(current!=NULL);

 /*   printf("\n List from right to left \n");*/

    temp=last;
    while(temp!=NULL)
    {
        printf(" rollno= %d contact no= %d\n",temp->rollno,temp->contact);
        temp=temp->prev;
    }
printf("\n");
}



void searchrollno(){
    int newno,i; //newno =33
    struct student *temp;
    current=start;
    printf("\n enter the rollno to search-> ");
    scanf("%d",&newno);
    i=1;
   while(current!=NULL)
    {
        if(current->rollno==newno){
            printf(" \n rollno exist found rollno= %d contact no= %d->",current->rollno,current->contact);
            printf(" \n position from left is = %d",i);
          }
        current=current->next;
        i++;

    }

temp=last;
   i=1;
   while(temp!=NULL)
    {
        if(temp->rollno==newno)
        {
           printf(" \n rollno exist found rollno= %d contact no= %d->",temp->rollno,temp->contact);
           printf(" \n position from right is = %d",i);
        }
        temp=temp->prev;
        i++;
    }
//printf("Rollno not found");
printf("\n");

}


void deleteno(){
    int newno;
    current=start;
    struct student *temp;
    printf("\n enter the rollno to search-> ");
    scanf("%d",&newno);// newno=33
   while(current!=NULL)
    {
        if(current->next->rollno==newno){
            temp =current->next->next;
            current->next=temp;
            temp->prev=current;
            //printf(" \n rollno exist found rollno= %d contact no= %d->",current->rollno,current->contact);
            displaylist();


        current=current->next;

    }

    printf("Rollno not found");
}}


int main(){

    int choice;
    while(1){
    printf("\n 1 to create first node \n 2 to display list \n 3 to search \n 4 to delete \n 5 to exit \n -");
    scanf("%d",&choice);
    switch(choice)
    {
        //11, 1111->22,2222 -> 33, 3333 ->44, 4444->NULL
        case 1: createnode(); break;
        case 2: displaylist(); break;
        case 3: searchrollno();break;
        case 4: deleteno();break;
        case 5: exit(0);
    }
    }
return 0;
}
