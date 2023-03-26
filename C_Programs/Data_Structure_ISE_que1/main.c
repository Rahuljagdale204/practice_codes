#include<stdio.h>
#include<stdlib.h>

struct node
{
    int number;
    struct node *next;
    struct node *point;
};
struct node *start = NULL;
struct node * temp, *Right;
int v, left, side;

struct node *createNode()
{
    struct node *sort;
    sort = (struct node*)malloc(sizeof(struct node));
    return sort;

};
void Insert(int number){
struct node *sort;
sort = createNode();
sort->next = NULL;
sort->number = number;
sort->point = NULL;
if(start == NULL){
    start = sort;
    v = number;
    left = number;
    side = number;
}
printf("Successfully Inserted\n");
}
void numbers(int number){
struct node *sort;
sort = createNode();
sort->next = NULL;
sort->number = number;
sort->point = NULL;
if(number > v){
        if(number>left){
    temp = start;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = sort;
    sort->point = temp;
    left = number;
    printf("\n Successfully Inserted\n");

}
else{
    temp = start;
    while(temp->number != left){
        Right = temp;
        temp = temp->next;
    }
    Right->next = sort;
    sort->next = temp;
    temp->point = sort;
    sort->point = Right;
    printf("Successfully Inserted\n");
}
}else{
if(number<side){
    temp = start;
    while(temp->point!=NULL){
        temp = temp->point;
    }
    temp->point = sort;
    sort->point = temp;
    side = number;
    printf("Successfully Inserted\n");

}
else{
    temp = start;
    while(temp->number!=side){
        Right = temp;
        temp = temp->point;
    }
    Right->point = sort;
    sort->point = temp;
    temp->next = sort;
    sort->next = Right;
    printf("Successfully Inserted\n");
}
}
}
void Delete(int number){
struct node *f, *m;
temp = start;
while(temp->point!= NULL){
    temp = temp->point;
}
f = temp;
while(f->number!=number){
    printf("B2\n");
    Right = f;
    f= f->next;
    if(f == NULL){
        printf("Entered Number is not in list unable to delete\n");
        return;
    }
}
Right->next = f->next;
if(f->next!=NULL){
    m = f->next;
    m->point = Right;
}
free(f);
printf("%d is successfully deleted\n",number);
}
void Display(){
struct node *F;
temp = start;
while(temp->point != NULL){
    temp = temp->point;
}
F = temp;
while(F!=NULL){
    printf("%d---->",F->number);
    F=F->next;
}
printf("\n");
}

void main()
{
    int num,choice;
    printf("Enter the first choice:-\n");
    scanf("%d",&num);
    Insert(num);
    while(1)
    {
        printf("1.Enter\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter a Number:-\n");
                scanf("%d",&num);
                numbers(num);
                break;
            case 2:
                printf("Enter the number which you want to delete:-\n");
                scanf("%d",&num);
                Delete(num);
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");

        }
    }
}
