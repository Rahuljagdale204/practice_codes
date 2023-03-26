#include <stdio.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
main()
{
    int choice;
    while(1)
    {
        printf("1.Insert element to queue\n");
        printf("2.Delete element from queue\n");
        printf("3.Display all elements of queue\n");
        printf("4.Quit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:
                delete();
                break;
                case 3:
                display();
                break;
                case 4:
                    exit(1);
                default:
                    printf("Wrong choice\n");
        }
    }
}
void insert()
{
int add_item;
if(rear==MAX-1){
    printf("Queue overflow\n");
}
else
    {
    if(front==-1)/*if queue is initially empty*/
        front=0;
    printf("Insert the element in queue:\n");
    scanf("%d",&add_item);
    rear=rear+1;
    queue_array[rear]=add_item;
}
}/*End insert()*/
void delete()
{
    if(front==-1||front>rear)
    {
        printf("Queue underflow\n");
        return;
    }
    else{
        printf("Element deleted from queue is:%d\n",queue_array[front]);
        front= front+ 1;
    }
}/*End of delete*/
void display()
{
    int i;
    if(front==-1)
        printf("Queue is empty\n");
    else{
        printf("Queue is:\n");
        for(i = front;i<=rear;i++)
            printf("%d\n",queue_array[i]);
        printf("\n");/*End of display()*/

    }
}








