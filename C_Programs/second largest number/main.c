#include <stdio.h>
int main()
{
    int t;
    int a,b,c;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d %d", &a, &b, &c);
if((c>a&&a>b)||(b>a&&a>c))
{
 printf("%d\n",a);
}
else if((a>b&&b>c)||(c>b&&b>a))
{
printf(" %d\n",b);
}
else if((b>c&&c>a)||(a>c&&c>b))
{
 printf("%d\n",c);
}
    }
    return 0;
}

