#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
struct empolyee {
int id_number;
int mo_number;
struct empolyee *next;
};
struct empolyee *initial=NULL;
struct empolyee *temp2=NULL;
void createnode()
{
struct empolyee *temp;
if (initial==NULL)
{
temp=(struct empolyee*)malloc(sizeof(struct empolyee));
printf("\n Enter id_number-");
scanf("%d", &temp->id_number);
printf("\n Enter mo_number no-");
scanf("%d", &temp->mo_number);
temp->next=NULL;
initial= temp;
}
else
{
temp=(struct empolyee*)malloc(sizeof(struct empolyee));
printf("\n Enter id_number-");
scanf("%d", &temp->id_number);
printf("\n Enter mo_number no-");
scanf("%d", &temp->mo_number);
temp2=initial;
while(temp2->next!=NULL)
{
temp2 =temp2->next;
}
temp2->next=temp;
temp->next=NULL;
}
}
void displaylist()
{
temp2=initial;
while(temp2!=NULL)
{
printf(" id_number= %d mo_number no= %d->",temp2->id_number,temp2->mo_number);
temp2=temp2->next;
}
}
void searchid_number(){
double time_spent = 0.0;
clock_t begin = clock();
int newno,check =0;
temp2=initial;
printf("\nEnter the id_number to search-> ");
scanf("%d",&newno);
while(temp2!=NULL)
{
if(temp2->id_number==newno)
{
check = 1;
printf(" \nid_number Exist\nFound id_number= %d\tmo_number No= %d->",temp2->id_number,temp2->mo_number);
}
temp2=temp2->next;
}
if(check==0)
printf("id_number not found");
clock_t end = clock();
time_spent += (double) (end-begin)/CLOCKS_PER_SEC;
printf("\n\nTime Elapsed is %f seconds ",time_spent);
}

int main(){
int choice;
printf("\n 1.Insert \n 2.Display \n 3.Search \n 4.Exit");
while(1){
printf("\nEnter Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
createnode();
break;
case 2:
displaylist();
break;
case 3:
searchid_number();
break;
case 4:
exit(0);
}
}
return 0;
}
