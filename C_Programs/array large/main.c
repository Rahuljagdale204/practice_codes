#include <stdio.h>
void main()
{
    float a[100];
    int i,n;
    printf("enter the array elements\n");
    {
        scanf("%d",&n);
        printf("\n");
    }
    for(i=0;i<n;++i)
    {
        printf("Enter number %d:",i+1);
        scanf("%f",&a[i]);
    }
    for(i=1;i<n;++i)
    {
        if(a[0]<a[i])
            a[0]=a[i];
    }
    printf("largest array=%.3f",a[0]);
}
