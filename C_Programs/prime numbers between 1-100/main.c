#include <stdio.h>
void main()
{
    int i,j,m=0;
    printf("The prime numbers between 1 to 100 are\n");
    for(i=1;i<=100;i++)
    {
        for(j=2;j<=i-1;j++)
        {
        if(i%j==0)
            break;
        }
        if(i==j)
            printf("%d\n",j);


    }
}
