#include<stdio.h>
void main()
{
    int n,d,num,sum=0;
    printf("Enter the number\n",n);
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(num==sum)
    {
        printf("The %d is armstrong number\n",num);
    }
    else
    {
        printf("The %d is not armstrong number\n",num);
    }
}
