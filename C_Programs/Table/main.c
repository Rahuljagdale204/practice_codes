#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number to find the table:");
    scanf("%d",&n);
    for(i=1;i<11;++i)
    {
      printf("%d*%d=%d\n",n,i,n*i);
    }
}
