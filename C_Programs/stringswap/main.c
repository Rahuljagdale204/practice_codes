#include<stdio.h>
void swap(int a,int b);
void main()
{
    int m=22,n=44;
    printf("Value before the swap is m=%d \n n=%d",m,n);
    swap(m,n);
}
void swap(int a,int b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    printf("\nValue after the swap is m=%d \n n=%d",a,b);
    return a;
}

