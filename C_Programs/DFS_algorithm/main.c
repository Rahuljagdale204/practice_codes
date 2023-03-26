#include<stdio.h>
int a[50][50],array[50],n;
void dfs(int v)
{
 int i;
 array[v]=1;
 for(i=1;i<=n;i++)
  if(a[v][i] && !array[i])
  {
   printf("\n %d->%d",v,i);
   dfs(i);
  }
}
void main()
{
 int i,j,count=0;
 printf("\n Enter Number of Vertices:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  array[i]=0;
  for(j=1;j<=n;j++)
   a[i][j]=0;
 }
 printf("\n Enter the Adjacency matrix: -\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 dfs(1);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  if(array[i])
   count++;
 }
 if(count==n)
  printf("\n Graph is connected");
 else
  printf("\n Graph is not connected");
 getch();
}
