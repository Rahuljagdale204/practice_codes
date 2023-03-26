#include <stdio.h>
#include<math.h>
#define e 0.0001
#define f(x) pow(x,3)-4*x+1
#define df(x) 3*x*x-4
int main()
{
    float x0, x1, f0, f1, df0;
    int i=0;
    printf("Enter the value of x0: \n");
    scanf("%f",&x0);
    do
    {
    f0=f(x0);
    df0=df(x0);
    x1= x0-(f0/df0);
    x0=x1;
    i++;
    printf("\nnew x = %f and e = %f\n",x1,fabs(f(x1)));
}  while(fabs(f(x1))>e);
    printf("\n Root of given Equation is %f and the number of Iterations is %d",x1,i);
}
