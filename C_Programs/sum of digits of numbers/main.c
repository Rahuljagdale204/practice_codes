#include <stdio.h>
void main()
{
    int n,d,sum=0;
    printf("Enter the number=\n",n);
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("The sum of digits of given number is %d\n",sum);
}
