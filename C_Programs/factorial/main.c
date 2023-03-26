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
    printf("The factorial %d is %.1f\n",n,fact);

}
