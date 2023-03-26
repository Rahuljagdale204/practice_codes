#include <stdio.h>

void main()
{
     int i,j,n1,n2,m1,m2,k,a[100][100],b[100][100],sub[100][100];
    printf("Enter the number of rows of matrix\n");
    scanf("%d",&n1);
    printf("Enter the number of column of matrix\n");
    scanf("%d",&m1);
    printf("Enter the %d*%d elements of A matrix\n",n1,m1);
    for(i=0;i<n1;++i)
        for(j=0;j<m1;++j)
        {
            printf("Enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("Enter the %d*%d elements of B matrix\n",n1,m1);
     for(i=0;i<n1;++i)
        for(j=0;j<m1;++j)
       {
            printf("Enter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n1;++i)
       {
           for(j=0;j<m1;++j)
           {
            sub[i][j]=a[i][j]-b[i][j];
           }
       }
        printf("\nsubtraction of two matrix is : \n");
        for(i=0;i<n1;++i)
        for(j=0;j<m1;++j)
        {
            printf("%f  ",sub[i][j]);
            if(j==m1-1)
                printf("\n\n");
        }
}
