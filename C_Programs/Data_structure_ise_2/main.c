#include<stdio.h>
#include<stdlib.h>

struct List
{
    int num;
    struct List *n;
    struct List *p;
    struct List *u;
    struct List *d;

};

struct List *START = NULL;
struct List *T,*R;
int V,l,s,count = 0;

struct List* createNode()
{
    struct List *L;
    L = (struct List*)malloc(sizeof(struct List));
    return L;
}

void Insert(int num)
{
    struct List *L;
    L = createNode();
    L->n = NULL;
    L->num = num;
    L->p = NULL;
    if(START == NULL)
    {
        START = L;
        V = num;
        l = num;
        s = num;
    }
    printf("SUCCESSFULLY INSERTED\n");
    printf("------------------------------------------------------------------------\n");
}

void Numbers(int num)
{
    struct List *L;
    L = createNode();
    L->n = NULL;
    L->num = num;
    L->p = NULL;
    L->u = NULL;
    L->d = NULL;
    if(num > V)
    {
        if(num > l)
        {
            T = START;
            while(T->n != NULL)
            {
                T = T->n;
            }
            T->n = L;
            L->p = T;
            printf("SUCCESSFULLY INSERTED\n");
            printf("------------------------------------------------------------------------\n");
        }
        else
        {
            T = START;
            while(T->num != l)
            {
                R = T;
                T = T->n;
            }
            R->n = L;
            L->n = T;
            T->p = L;
            L->p = R;
            printf("SUCCESSFULLY INSERTED\n");
            printf("------------------------------------------------------------------------\n");
        }
    }
    else
    {
        if(num < s)
        {
            T = START;
            while(T->p != NULL)
            {
                T = T->p;
            }
            T->p = L;
            L->n = T;
            printf("SUCCESSFULLY INSERTED\n");
            printf("------------------------------------------------------------------------\n");
        }
        else
        {
            T = START;
            while(T->num != s)
            {
                R = T;
                T = T->p;
            }
            R->p = L;
            L->p = T;
            T->n = L;
            L->n = R;
            printf("SUCCESSFULLY INSERTED\n");
            printf("------------------------------------------------------------------------\n");
        }
    }

}

void bNumbers(int num)
{
    struct List *L;
    L = createNode();
    L->u = NULL;
    L->d = NULL;
    L->n = NULL;
    L->p = NULL;
    L->num = num;
    if(num > V)
    {
        if(num > l)
        {
            T = START;
            while(T->u != NULL)
            {
                T = T->u;
            }
            T->u = L;
            L->d = T;
            l = num;
            printf("%d is Successfully Backup-ed.\n",num);
            printf("------------------------------------------------------------------------\n");
        }
        else
        {
            T = START;
            while(T->num != l)
            {
                R = T;
                T = T->u;
            }
            R->u = L;
            L->u = T;
            T->d = L;
            L->d = R;
            printf("%d is Successfully Backup-ed.\n",num);
            printf("------------------------------------------------------------------------\n");
        }
    }
    else
    {
        if(num < s)
        {
            T = START;
            while(T->d != NULL)
            {
                T = T->d;
            }
            T->d = L;
            L->u = T;
            s = num;
            printf("%d is Successfully Backup-ed.\n",num);
            printf("------------------------------------------------------------------------\n");
        }
        else
        {
            T = START;
            while(T->num != s)
            {
                R = T;
                T = T->d;
            }
            R->d = L;
            L->d = T;
            T->u = L;
            L->u = R;
            printf("%d is Successfully Backup-ed.\n",num);
            printf("------------------------------------------------------------------------\n");
        }
    }

}

void Delete(int num)
{
    count = 0;
    struct List *F,*M;
    T = START;
    while(T->p != NULL)
    {
        T = T->p;
    }
    F = T;
    while(F->num != num)
    {
        count++;
        R = F;
        F = F->n;
        if(F == NULL)
        {
            printf("Entered number is not in list so unable to delete.\n");
            printf("------------------------------------------------------------------------\n");
            return;
        }
    }
    R->n = F->n;
    if(F->n != NULL)
    {
        M = F->n;
        M->p = R;
    }
    free(F);
    printf("%d IS SUCCESSFULLY DELETED\n",num);
    printf("------------------------------------------------------------------------\n");
}

void bDelete(int num)
{
    count = 0;
    struct List *F,*M;
    T = START;
    while(T->d != NULL)
    {
        T = T->d;
    }
    F = T;
    while(F->num != num)
    {
        count++;
        R = F;
        F = F->u;
        if(F == NULL)
        {
            printf("Entered number is not backup-ed so unable to delete.\n");
            printf("------------------------------------------------------------------------\n");
            return;
        }
    }
    R->n = F->n;
    if(F->n != NULL)
    {
        M = F->n;
        M->p = R;
    }
    free(F);
    printf("%d IS SUCCESSFULLY DELETED\n",num);

    printf("------------------------------------------------------------------------\n");
}

void Display()
{
    printf("Displaying Elements \n");
    struct List *F;
    T = START;
    while(T->p != NULL)
    {
        T = T->p;
    }
    F = T;
    printf("------------------------------------------------------------------------\n");
    while(F != NULL)
    {
        printf("%d--->",F->num);
        F = F->n;
    }
    printf("\n");
    printf("------------------------------------------------------------------------\n");

}

void bDisplay()
{
    printf("Displaying Backup Elements \n");
    struct List *F;
    T = START;
    while(T->d != NULL)
    {
        T = T->d;
    }
    F = T;
    printf("------------------------------------------------------------------------\n");
    while(F != NULL)
    {
        printf("%d--->\n",F->num);
        F = F->u;
    }
    printf("\n");
    printf("------------------------------------------------------------------------\n");

}

void Search(int num)
{
    count = 0;
    if(num > V)
    {
        T = START;
        while(T->num != num)
        {
            T=T->n;
            count++;
            if(T == NULL)
            {
                printf("Entered number is not in list.\n");
                printf("------------------------------------------------------------------------\n");
                return;
            }
        }
        printf("%d is in list and at node number %d to right of initial entry.\n",num,count);
        printf("------------------------------------------------------------------------\n");
    }
    else if(num < V)
    {
        T = START;
        while(T->num != num)
        {
            T=T->p;
            count++;
            if(T == NULL)
            {
                printf("Entered number is not in list.\n");
                printf("------------------------------------------------------------------------\n");
                return;
            }
        }
        printf("%d is in list and at node number %d to left of initial entry.\n",num,count);
        printf("------------------------------------------------------------------------\n");
    }
    else
    {
        printf("%d is the initial entry (i.e V).\n",num);
    }
}

void bSearch(int num)
{
    count = 0;
    if(num > V)
    {
        T = START;
        while(T->num != num)
        {
            T=T->u;
            count++;
            if(T == NULL)
            {
                printf("Entered number is not backup-ed.\n");
                printf("------------------------------------------------------------------------\n");
                return;
            }
        }
        printf("%d is backup-ed and at node number %d on top of initial entry.\n",num,count);
        printf("------------------------------------------------------------------------\n");
    }
    else if(num < V)
    {
        T = START;
        while(T->num != num)
        {
            T=T->d;
            count++;
            if(T == NULL)
            {
                printf("Entered number is not backup-ed.\n");
                printf("------------------------------------------------------------------------\n");
                return;
            }
        }
        printf("%d is backup-ed and at node number %d on bottom of initial entry.\n",num,count);
        printf("------------------------------------------------------------------------\n");
    }
    else
    {
        printf("%d is the initial entry (i.e V).\n",num);
    }
}


void main()
{
    int num,choice;
    printf("Enter Initial Number (i.e. V):-\n");
    scanf("%d",&num);
    Insert(num);
    while(1)
    {
        printf("1.Enter\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter a number:-\n");
                scanf("%d",&num);
                Numbers(num);
                bNumbers(num);
                break;
            case 2:
                printf("Enter a number to delete:-\n");
                scanf("%d",&num);
                Delete(num);
                bDelete(num);
                break;
            case 3:
                Display();
                printf("--------------------------------------------------\n");
                bDisplay();
                break;
            case 4:
                printf("Enter a number to search:-\n");
                scanf("%d",&num);
                Search(num);
                bSearch(num);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");

        }
    }
}
