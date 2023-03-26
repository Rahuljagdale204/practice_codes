#include <stdio.h>
#include <math.h>
#define e 0.0001
#define f(x) x*x*x - 4*x +1

void main()
{
 int i=0;
 float x0, x1, x2, f0, f1, f2;
 printf("Enter the value of x(L) and x(U): \n");
 scanf("%f%f",&x0,&x1);
 do
 {
     f0=f(x0);
     f1=f(x1);
     f2=f(x2);
     x2= ((x0*f1)-(x1*f0))/(f1-f0);
     if(f0*f2<0)
     {
         x1=x2;
         f1=f2;
     }
     else
     {
         x0=x2;
         f0=f2;
     }
     i++;
      printf("\nIteration %d\nx(m) = %f \t e = %f\n and value of function at x(m) = %f\n",i,x2,fabs(f(x2)),f2);
 }while(fabs(f2)>e);
 printf("\n Root of given Equation is %f and the number of Iterations is %d",x2,i);

}
