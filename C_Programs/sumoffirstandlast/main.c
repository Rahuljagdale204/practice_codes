#include <stdio.h>
int main()
{
    int T,n,sum=0,fn,ln;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        ln=n%10;
        sum=sum+ln;
        while(n!=0)
        {
            fn=n%10;
            n=n/10;
        }
        sum=fn+ln;
        printf("%d\n",sum);
        sum=0;

    }
    return 0;
}
