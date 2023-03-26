/*SYCSE
Div A and B
Binary tree program
Balaji Bombade
•
Sep 30
Binary tree program in C

BT.txt
Text
Class comments*/


#include<stdlib.h>
#include<stdio.h>

struct student {
int rollno;
struct student * right, * left;
};

typedef struct student node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->rollno = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->rollno)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->rollno)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->rollno);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->rollno);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->rollno);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node ** tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }

    if(val < (*tree)->rollno)
    {
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->rollno)
    {
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->rollno)
    {
        return *tree;
    }
}

int main()
{
    node *root;
    node *tmp;
    int ch;
    //int i;
     int rollno;
    root = NULL;
    while(1){
    printf("\n 1 for insert \n 2 for display \n 3 for search \n 4 for delete \n 5 for exit");
    scanf("%d",&ch);
    switch(ch){
                case 1:printf("\nenter rollno to inter in tree->");
                        scanf("%d",&rollno);
                       insert(&root,rollno);
                       break;
                case 2:printf("Pre Order Display\n");
                       print_preorder(root);
                       printf("In Order Display\n");
                       print_inorder(root);
                       printf("Post Order Display\n");
                       print_postorder(root);
                       break;
                case 3: printf("\n Enter rollno to search ->");
                        scanf("%d",&rollno);
                        insert(&root,rollno);
                        tmp = search(&root, rollno);
                        if (tmp)
                        {
                         printf("Searched node=%d\n", tmp->rollno);
                        }
                        else
                        {
                            printf("Data Not found in tree.\n");
                        }
                        break;

                 case 4: deltree(root);break;
                 case 5:exit(0);
    }
    }
    return 0;
}

