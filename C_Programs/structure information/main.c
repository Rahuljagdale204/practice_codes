#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30];
    char sirname[30];
    float percentage;
};
      int main()
{
    int i;
    struct student record[3];
    record[0].id=1;
    strcpy(record[0].name,"sanket");
    strcpy(record[0].sirname,"Jadhav");
    record[0].percentage=95.45;
    record[1].id=2;
    strcpy(record[1].name,"Saikiran");
    strcpy(record[1].sirname,"Dharane");
    record[1].percentage=94.67;
    record[2].id=3;
    strcpy(record[2].name,"Apurav");
    strcpy(record[2].sirname,"Gunjkar");
    record[2].percentage=95.66;
    for(i=0;i<3;i++)
    {
        printf("Record of student %d\n",i+1);
    printf("student id:%d\n",record[i].id);
    printf("Student name:%s",record[i].name);
    printf(" %s\n",record[i].sirname);
    printf("Percentage:%f\n",record[i].percentage);
    printf("\n\n");
    }
    return 0;
}
