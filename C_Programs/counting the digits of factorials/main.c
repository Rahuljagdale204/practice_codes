#include<stdio.h>
void main()
{
    double i,fact=1;
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        fact=fact*i;
       }
printf("fact=%.1f\n",fact);
   long long int d, count=0;
    d=fact;
    while(d>0)
    {
      count++;
      d=d/10;
    }
    printf("count=%lld",count);
}
