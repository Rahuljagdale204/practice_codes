#include<stdio.h>
#include<stdib>

int main()
{
int i,j,a[10][10],r,c,b[10][10],m[10][10],sum;
	printf("enter the no. of rows and column :\n");
	scanf("%d%d",&r,&c);
	for (i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		scanf("%d"&a[i][j]);

	}
}
printf("enter the matrix a:\n");
for(i=0;i<r;i++);
{
	for(j=0;j<c;j++)
{
	printf("%d\t",a[i][j]);
}
printf("\n");
}


printf("enter the elements for b matrix:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("enter the matrix b:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}
m[i][j]=a[i][j]+b[i][j];


printf("sum of a and b:\n",m[i][j]);


for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",m[i][j]);
	}
	printf("\n");

}
return 0;
}
