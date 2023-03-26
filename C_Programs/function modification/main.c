#include <stdio.h>
int function(int,int[],char[]);
int main()
{
    int i,a=20;
    int arr[5]={10,20,30,40,50};
    char str[30]={"\"fresh2refresh\""};
    printf("   ***Value before modification***\n");
    printf("Value of a is %d\n",a);
    for(i=0;i<5;i++)
    {
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    printf("The value of str is %s\n",str);
    printf("   ***Value after modification***\n");
    a=function(a,&arr[0],&str[0]);
    printf("The value of a is %d\n",a);
     for(i=0;i<5;i++)
    {
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    printf("The value of str is %s\n",str);
    return 0;
}
     int function(int a,int *arr,char*str)
{
    int i;
    a=a+20;
    arr[0]=arr[0]+20;
    arr[1]=arr[1]+20;
    arr[2]=arr[2]+20;
    arr[3]=arr[3]+20;
    arr[4]=arr[4]+20;
    strcpy(str,"\"modified string\"");
    return a;
}
