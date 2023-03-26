#include<stdio.h>
void main()
{
    int n,d,rev=0,num;
    printf("Enter the number\n",n);
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==num)
    {
        printf("The %d is palindrome number\n",num);
    }
    else
    {
        printf("The %d is not palindrome number\n",num);
    }
}
