#include<stdio.h>
main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
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
  printf("\n\n The table you entered is as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.2f\t%0.2f",x[i],y[i]);
        printf("\n");
    }
   while(d==1)
    {
        printf("\nEnter the value of x for f(x)");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\The value of f(x) at x=%.1f is %.2f",a,k);
        printf("\n Do you want to continue?\n Press 1 to continue and any other key to exit");
        scanf("%d",&d);
    }
}
