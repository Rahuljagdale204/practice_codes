#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
        while(T--)
        {
            int n,d=0,sum=0;
            scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("%d\n",sum);
        }
}
