#include<stdio.h>
void main()
{
    int i,j,n1,n2,m1,m2,k,a[100][100],b[100][100],mul[100][100];
    printf("Enter the number of rows of A matrix\n");
    scanf("%d",&n1);
    printf("Enter the number of column of A matrix\n");
    scanf("%d",&m1);
    printf("Enter the number of rows of B matrix\n");
    scanf("%d",&n2);
    printf("Enter the number of column of B matrix\n");
    scanf("%d",&m2);
    while(m1!=n2)
    {
        printf("Error!column of A matrix is not equal to row of B matrix\n ");
     printf("Enter the number of rows of A matrix\n");
    scanf("%d",&n1);
    printf("Enter the number of column of A matrix\n");
    scanf("%d",&m1);
    printf("Enter the number of rows of B matrix\n");
    scanf("%d",&n2);
    printf("Enter the number of column of B matrix\n");
    scanf("%d",&m2);
    }
     printf("Enter the %d*%d elements of A matrix\n",n1,m1);
    for(i=0;i<n1;++i)
        for(j=0;j<m1;++j)
        {
            printf("\nEnter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\nEnter the %d*%d elements of B matrix\n",n2,m2);
     for(i=0;i<n2;++i)
        for(j=0;j<m2;++j)
       {
            printf("\nEnter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n1;++i)
            for(j=0;j<m2;++j)
        {
            mul[i][j]=0;
        }
        for(i=0;i<n1;++i)
            for(j=0;j<m2;++j)
            for(k=0;k<m1;++k)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
            printf("\nOutput matrix:\n");
            for(i=0;i<n1;++i)
            for(j=0;j<m2;++j)
            {
                printf(" %d  ",mul[i][j]);
                if(j==m2-1)
                    printf("\n\n");
            }
}
