#include<stdio.h>
void main()
{
    int a, b;
    int sum, mul, div, sub;
    printf("Enter the 1st number: - \n");
    scanf("%d",&a);
    printf("Enter the 2nd number: - \n");
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("sum = %d\n",sum);
    printf("sub = %d\n",sub);
    printf("mul = %d\n",mul);
    printf("div = %d\n",div);
}