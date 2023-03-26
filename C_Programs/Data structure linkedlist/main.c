 #include <stdio.h>
#include<string.h>
struct student
{
    int rollno;
    int contact;
    struct student *next;
};
int main()
{
    struct student *p, *q, *r;
    p=(struct student *)malloc(sizeof(struct student));
    p->rollno=10;
    p->contact=1111;
    printf("\n%d",p->rollno);
    printf("\n%d",p->contact);

    q=(struct student *)malloc(sizeof(struct student));
    q->rollno=20;
    q->contact=2222;
    printf("\n%d",q->rollno);
    printf("\n%d",q->contact);

    p->next=q;

    r=(struct student *)malloc(sizeof(struct student));
    r->rollno=30;
    r->contact=3333;
    printf("\n%d",r->rollno);
    printf("\n%d",r->contact);

    q->next=r;
    printf("\n\nfirst student Roll number %d, contact number %d",p->rollno,p->contact);
    printf("\n\nsecond student Roll number %d, contact number %d",p->next->rollno,p->next->contact);
    printf("\n\nThird student Roll number %d, contact number %d",p->next->next->rollno,p->next->next->contact);
    getch();
    return 0;
}
