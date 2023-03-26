#include <stdio.h>
int main()
{
    int i,j,n,m,a[100][100],trace=0;
    printf("Enter the number of rows of matrix\n");
    scanf("%d",&n);
    printf("Enter the number of column of matrix\n");
    scanf("%d",&m);
    printf("Enter the %d*%d elements of B matrix\n",n,m);
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        {
            printf("Enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
       for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        if(i==j)
      {
        trace=trace+a[i][j];
      }
      printf("The trace of given matrix is:%d",trace);
}
