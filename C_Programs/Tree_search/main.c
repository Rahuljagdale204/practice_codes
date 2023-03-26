#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *left,*right;
}*root=NULL,*temp;
void insert(int item);
void create(int item);
int search_element(struct node *t,int item,int flag);
void search(struct node *t);
void inorder(struct  node *t);
int main()
{
   int ch,item,choice,flag;
   do
   {
       flag=0;
        printf("\n--Main Menu--");
           printf("\n1. Insert node");
           printf("\n2. Search node");
           printf("\n3. Inorder Traversal");
           printf("\nEnter your choice: ");
           scanf("%d",&choice);
           switch(choice)
           {
               case 1: printf("\nEnter the element you want to insert: ");
                       scanf("%d",&item);
                       insert(item);
                       break;
               case 2: printf("\nEnter the element you want to search: ");
                       scanf("%d",&item);
                       flag=search_element(root,item,flag);
                       if(flag==0)
                       {
                            printf("\n\nElement is not present in the tree !");

                       }
                       else
                       {
                            printf("\n\nElement is present in the array");
                       }
                       break;
               case 3: printf("\n\nThe root element is: %d\n",root->data);
                       inorder(root);
                       break;
               default: printf("\nError, you have entered the wrong choice !");

           }
           printf("\nDo you want to continue[1/0]: ");
           scanf("%d",&ch);
   }while(ch==1);
   return 0;
}
void insert(int item)
{
  create(item);
  if(root==NULL)
  {
      root=temp;
  }
  else
  {
      search(root);
  }
}
void create(int item)
{
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=item;
  temp->left=temp->right=NULL;
}
void search(struct node *t)
{
   if(temp->data<t->data && t->left!=NULL)
   {
         search(t->left);
   }
   else if(temp->data<t->data && t->left==NULL)
   {
         t->left=temp;
   }
   else if(temp->data>t->data && t->right!=NULL)
   {
         search(t->right);
   }
   else if(temp->data>t->data && t->right==NULL)
   {
         t->right=temp;
   }
}
void inorder(struct node *t)
{
   if(root==NULL)
   {
        printf("\nTree is empty !");
        return;
   }
   if(t->left!=NULL)
   {
        inorder(t->left);
   }
   printf("%d ",t->data);
   if(t->right!=NULL)
   {
        inorder(t->right);
   }
}
int search_element(struct node *t,int item, int flag)
{
   if(root==NULL)
   {
        return flag;
   }
   if(item==root->data)
   {
        flag=1;
        return flag;
   }
   if(item<t->data)
   {
        t=t->left;
   }
   else
   {
        t=t->right;
   }
   while(t!=NULL)
   {
         if(t->data==item)
         {
             flag=1;
             return flag;
         }
         if(item<t->data)
         {
             t=t->left;
         }
         else
         {
             t=t->right;
         }
   }
   return flag;
}
