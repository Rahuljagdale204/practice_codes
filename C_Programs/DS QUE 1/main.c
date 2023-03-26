#include<stdio.h>
#include<string.h>
struct std
{
   char subjectname[100],teachername[100];
   float time;
};
void main()
{
    int n,i;
    //Accepting the input from user for number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d",&n);
    //Accepting subject name, teacher name and lecture time from user as input
    printf("Enter the subject name, teacher name and lecture time: \n");
    //Calling the defined structure 'struct std' for storing the input data provided by user
    struct std record[10];
    for(i=0;i<n;i++)
    {
        scanf("%s %s",&record[i].subjectname,&record[i].teachername);
        scanf("%f",&record[i].time);
    }
    //Displaying the stored information in the 'struct std'
    for(i=0;i<n;i++)
    {
        printf("Subject Name: %s\t  Teacher Name: %s\t  Lecture Time: %.2f\n",record[i].subjectname,record[i].teachername,record[i].time);
    }
}
