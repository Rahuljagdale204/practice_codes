#include <stdio.h>
#include <string.h>
union student
{
 char name[20];
 char subject[20];
 float percentage;
};
int main()
{
    union student record1;
    union student record2;

    strcpy(record1.name,"Shubham");
    strcpy(record1.subject,"Mathematics");
    record1.percentage=94.34;

    printf("Record of student 1\n");
    printf("Name     :%s\n",record1.name);
    printf("Subject  :%s\n",record1.subject);
    printf("Percentage:%f\n\n",record1.percentage);

    printf("Record of student 2\n");

    strcpy(record2.name,"Ruturaj");
    printf("Name     :%s\n",record2.name);

    strcpy(record2.subject,"Mathematics");
    printf("Subject  :%s\n",record2.subject);

    record2.percentage=93.21;
    printf("Percentage:%f\n\n",record2.percentage);
return 0;
}

