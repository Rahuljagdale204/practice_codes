#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    int i;
    struct student record[9];
    record[0].id=1;
    strcpy(record[0].name,"Raju");
    record[0].salary=10000;
    record[1].id=2;
    strcpy(record[1].name,"Sayam");
    record[1].salary=8000;
    record[2].id=3;
    strcpy(record[2].name,"Baburav");
    record[2].salary=3000;
    record[3].id=4;
    strcpy(record[3].name,"Nikhil");
    record[3].salary=15000;
    record[4].id=5;
    strcpy(record[4].name,"swapnil");
    record[4].salary=20000;
    record[5].id=6;
    strcpy(record[5].name,"Rohit");
    record[5].salary=30000;
    record[6].id=7;
    strcpy(record[6].name,"Utkarsh");
    record[6].salary=5000;
    record[7].id=8;
    strcpy(record[7].name,"Adresh");
    record[7].salary=20000;
    record[8].id=9;
    strcpy(record[8].name,"Harshal");
    record[8].salary=45000;
    record[9].id=10;
    strcpy(record[9].name,"Apurav");
    record[9].salary=60000;
    for(i=0; i<10; i++)
    {
        printf("RECORD OF EMPLOYEE: %d\n",i+1);
        printf("Employee Id is:%d\n",record[i].id);
        printf("Employee Name is:%s\n",record[i].name);
        printf("Employee gross salary is:%.2f\n",record[i].salary);
    }
    return 0;
}
