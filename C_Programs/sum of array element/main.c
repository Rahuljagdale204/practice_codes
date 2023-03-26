#include<stdio.h>
void main()
{
    int a[100],i,n,sum=0;
    printf("Enter the array elements\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;++i)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nThe addition of array elements is %d",sum);
}
