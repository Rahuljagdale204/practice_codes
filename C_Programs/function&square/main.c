#include<stdio.h>
float square(float x);
int main()
{
    float m,n;
    printf("Enter the number: ");
    scanf("%f",&m);
    n=square(m);
    printf("The square of %f is %f",m,n);
}
float square(float x)
{
    float p;
    p=x*x;
    return(p);
}
