#include<stdio.h>
#include<conio.h>

void main()
{
    float x[10], y[10], p[10],n,k,f,f1=1,f2=0;
    int i,j=1;
 printf("\nEnter the no of data:");
scanf("%d",&n);
printf("\nEnter the data:");
for(i=0;i<n;i++)
{
printf("\nX%d=",i+1);
scanf("%f",&x[i]);
printf("\nY%d=",i+1);
scanf("%f",&y[i]);
}
 f=y[1];
printf("\nEnter the value of x for f(x)");
scanf("%f",&k);
    do
    {
        for (i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }

    while(n!=1);
    f+=f2;
    printf("\nThe value of f(x) at x=%f is %f", k , f);
    getch();
}
