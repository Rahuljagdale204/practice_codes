#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int main()
{
       int item, choice, i;
       int arr_stack[MAX_SIZE];
       int top= 0;
       int exit = 1;
       printf("\nSimple Stack Example-Array");
       do{
        printf("\n\nStack Main Menu");
        printf("\n 1.Push\n2.Pop\n3.Display\n Other to exit");
        printf("\nEnter Your choice: ");
        scanf("%d",&choice);
        switch(choice)
       {
       case 1:
        if (top==MAX_SIZE)
            printf("\n##Stack in full!");
        else{
            printf("\nEnter the value to be pushed: ");
            scanf("%d",&item);
            printf("\n##Position: %d, Pushed Value:%d",top,item);
            arr_stack[top++]=item;
        }
        break;
       case 2:
        if(top==0)
            printf("\n##Stack is Empty!");
        else{
            --top;
            printf("\n##Position: %d,Popped Value: %d",top,arr_stack);

        }
        break;
       case 3:
        printf("\n##Stack Size:%d",top);
        for(i=(top-1);i>=0;i--)
            printf("\n##Position:%d, value:%d",i,arr_stack[i]);
        break;
       default:
        exit=0;
        break;
       }

       }
       while(exit);
       return 0;

}
