#include <stdio.h>

void main()
{
    int a[10], i, j;
    printf("Enter 10 element: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter new 10 elements:\n");
    for(i=0,j=9;i<5,j>4;i++,j--)
    {
        scanf("%d",&a[i]);
        scanf("%d",&a[j]);
    }
    printf("updated array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
        printf("%u\n",&a[i]);

    }
}

