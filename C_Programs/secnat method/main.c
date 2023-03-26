#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x +x*x -1

void main()
{
    int i=0;
    float x0, x1, x2, f0,f1,f2;
    printf("Enter the value of x0 and x1: \n");
    scanf("%f%f",&x0,&x1);
    do{
        f0=f(x0);
        f1=f(x1);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f2=f(x2);
        f0=f1;
        f1=f2;
         x0=x1;
         x1=x2;
         i++;
         printf("\nIteration %d\n",i);
         printf("Root =%f",x2);
         printf("\tvalue of fuction at %f is %f",x2,f2);
    }while(fabs(f2)>e);
    printf("\n\n The Root of the given equation is %2f and %d Iterations are required.",x2,i);
    getch();
}
