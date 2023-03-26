#include<stdio.h>
void main()
{
    int i,n,t1=0,t2=1,t3;
    printf("Enter the number of terms to print fibonacci series \n",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }

}
