#include <stdio.h>
struct student
{
    int rollno;
    int contact;
};
int main()
{
    struct student *p, k;
    p=(struct student*)malloc(sizeof(struct student));
    k.rollno=10;
    p=&k;
    printf("%d\n",p->rollno);
    k.rollno=20;
    printf("%d",k.rollno);
    return 0;
}
