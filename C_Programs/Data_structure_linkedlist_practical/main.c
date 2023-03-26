#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int id;
    int contactno;

    struct employee *next;
};
int main()
{
  struct employee *a, *b, *c;
      a=(struct employee *)malloc(sizeof(struct employee));
  printf("Enter the 1st employee's ID number: \n ");
  scanf("%d",&a->id);
  printf("Enter the 1st employee's contact number\n");
  scanf("%d",&a->contactno);


     b=(struct employee *)malloc(sizeof(struct employee));
  printf("Enter the 2nd employee's ID number: \n ");
  scanf("%d",&b->id);
  printf("Enter the 2nd employee's contact number\n");
  scanf("%d",&b->contactno);

    a->next = b;


     c=(struct employee *)malloc(sizeof(struct employee));
  printf("Enter the 3rd employee's ID number: \n ");
  scanf("%d",&c->id);
  printf("Enter the 3rd employee's contact number\n");
  scanf("%d",&c->contactno);

    b->next = c;

    printf("\n\nfirst Employee's ID:%d\ncontact number %d",a->id,a->contactno);
    printf("\n\nsecond Employee's ID:%d\ncontact number %d",a->next->id,a->next->contactno);
    printf("\n\nThird Employee's ID:%d\ncontact number %d",a->next->next->id,a->next->next->contactno);
    getch();
    return 0;
}
