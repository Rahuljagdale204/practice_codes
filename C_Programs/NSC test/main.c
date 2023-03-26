
#include <stdio.h>
#include <math.h>
#define f(x) (x*x-3)

int main()
{
    float x0,x1,x2;
    int k;
    float e = 0.0001;
    do{
        printf("Enter the value for x0 and x1: \n");
        scanf("%f%f",&x0,&x1);

    }
    while(f(x0) * f(x1) > 0);
        do
        {
            k++;
            x2=(x0+x1)/2;
            if(f(x2)>0)
            {
                x1=x2;
            }
            else{
                x0=x2;
            }
            printf("\nx2 = %f and e = %f\n",x2,fabs(f(x2)));
        }
      while(fabs(f(x2))>e);

    printf("\n Root of given Equation is %f and the number of Iterations is %d",x2,k);

}
