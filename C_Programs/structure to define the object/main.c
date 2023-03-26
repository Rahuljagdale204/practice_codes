#include <stdio.h>
int main()
{
    int i, n, t, a[100];
    printf("Enter the number of cases: \n");
    scanf("%d",&t);
    while(t<10)
    {
        printf("Error!");
        printf("Enter the number of cases: \n");
        scanf("%d",&t);
    }
    while(t--)
    {
       for(i=0;i<10;++i)
       {
        printf("\nEnter the element %d:",i+1);
            scanf("%d",&a[i]);
    }
    for(i=0;i<t-10;++i)
    {
        printf("\nEnter the element %d:",i+11);
        scanf("%d",&a[i]);
    }
for(i=0;i<t;++i)
{

    printf("the address of %d is %u\n",a[i],&a[i]);
}
    }

return 0;
}
