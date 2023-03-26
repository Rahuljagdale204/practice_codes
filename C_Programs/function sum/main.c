#include <stdio.h>
int sum();
int main()
{
    int addition;
    addition=sum();
    printf("Sum of given number is:%d",addition);
    return 0;
}
int sum()
{
    int a=20,b=40,sum;
    sum=a+b;
    return sum;

}
