#include<stdio.h>
void main()
{
    int i,j,n1,n2,m1,m2,k,a[100][100],b[100][100],mul[100][100],sum[100][100],sub[100][100];
    char operator;
printf("please select any Arithmetic operator you wish!\n");
scanf("%c",&operator);


        switch(operator){
        case '+':
printf("for addition\n");
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
        for(j=0;j<m1;++j)
            sum[i][j]=a[i][j]+b[i][j];
        printf("\nsum of two matrix is : \n");
        for(i=0;i<n1;++i)
        for(j=0;j<m1;++j)
        {
            printf("%d  ",sum[i][j]);
            if(j==m1-1)
                printf("\n\n");


        }
        break;

        case '-':
            printf("for subtraction \n");
            printf("Enter the number of rows of matrix\n");
    scanf("%d",&n1);
    printf("Enter the number of column of matrix\n");
    scanf("%d",&m1);
    printf("Enter the %d*%d elements of A matrix\n",n1,m1);
    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        {
            printf("Enter the element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("Enter the %d*%d elements of B matrix\n",n1,m1);
     for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
       {
            printf("Enter the element b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n1;i++)
           for(j=0;j<m1;j++)

            sub[i][j]=a[i][j]-b[i][j];
        printf("\nsubtraction of two matrix is : \n");
        for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        {
            printf("%f  ",sub[i][j]);
            if(j==m1-1)
                printf("\n\n");
        }
        break;

        case '*':
printf("for multiplication \n");
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
        break;
        default:printf("Invalid");
        }

}
