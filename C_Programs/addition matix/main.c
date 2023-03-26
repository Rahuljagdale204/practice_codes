#include<stdio.h>
void main()
{
    int i,j,n,m,a[100][100],b[100][100],sum[100][100];
    printf("Enter the number of rows of matrix\n");
    scanf("%d",&n);
    printf("Enter the number of column of matrix\n");
    scanf("%d",&m);
    printf("Enter the %d*%d elements of A matrix\n",n,m);
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        {
            printf("Enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("Enter the %d*%d elements of B matrix\n",n,m);
     for(i=0;i<n;++i)
        for(j=0;j<m;++j)
       {
            printf("Enter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n;++i)
        for(j=0;j<m;++j)
            sum[i][j]=a[i][j]+b[i][j];
        printf("\nsum of two matrix is : \n");
        for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        {
            printf("%d  ",sum[i][j]);
            if(j==m-1)
                printf("\n\n");


        }
}
