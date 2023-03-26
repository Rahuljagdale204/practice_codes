//creating first linked list
#include <stdio.h> //header files
#include <conio.h>
#include <stdlib.h>
typedef struct student {
int rollno;
int contact;
struct student *next;
};
struct student *start=NULL;
struct student *current=NULL;
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
start= temp;
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
temp->next=NULL;
}
}
void displaylist()
{
current=start;
while(current!=NULL)
{
printf(" rollno= %d contact no= %d->",current->rollno,current->contact);
current=current->next;
}
}
void searchrollno(){
int newno; //newno =33
current=start;
printf("\n enter the rollno to search-> ");
scanf("%d",&newno);
while(current!=NULL)
{
if(current->rollno==newno){
printf(" \n rollno exist found rollno= %d contact no= %d\n",current->rollno,current->contact);
}
current=current->next;
}
printf("Rollno not found");
}
void deleteno(){
int newno;
current=start;
printf("\n enter the rollno to search-> ");
scanf("%d",&newno);// newno=33
while(current!=NULL)
{
if(current->next->rollno==newno){
current->next=current->next->next;
//printf(" \n rollno exist found rollno= %d contact no=%d->",current->rollno,current->contact);
displaylist();
}
current=current->next;
}
printf("Rollno not found");
}
int main(){
//struct student *a,*b;
int choice;
while(1){
printf("\n 1 to create first node \n 2 to display list \n 3 to search \n 4 to delete \n 5 to exit\n");
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
