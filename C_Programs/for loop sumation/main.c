#include<stdio.h>
void main()
{
    int sum=0,i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum upto %d is %d\n",n,sum);
}
