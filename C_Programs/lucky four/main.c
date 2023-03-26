#include <stdio.h>
void main()
{
    int T,n,a,count=0;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        count=0;
        while(n!=0)
        {
             a=n%10;
        if(a==4)
        {
            count++;
        }
        n=n/10;
        }

          printf("%d\n",count);
    }
}
