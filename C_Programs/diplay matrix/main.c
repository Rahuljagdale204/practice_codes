#include<stdio.h>
void main()
{
    int a[3][4],i,j;
    printf("Enter 3*4 elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}
