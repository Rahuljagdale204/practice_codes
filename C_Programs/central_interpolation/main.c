#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
int n;
int i,j;
float arr[10][10];
float ay[10][10];
float h;
float p;
float diff[20][20];
float x,y;
float y1,y2,y3,y4;

printf("\nEnter the no of data:");
scanf("%d",&n);
printf("\nEnter the data:");
for(i=0;i<n;i++)
{
printf("\nX%d=",i+1);
scanf("%f",&arr[i][0]);
printf("\nY%d=",i+1);
scanf("%f",&ay[i][1]);
}


printf("\nEnter the value of x for f(x)");
scanf("%f",&x);
h=arr[n-1][0]-arr[n-2][0];
for(j=2;j<=n;j++){
for(i=0;i<n-1;i++)
{
diff[i][j]=ay[i+1][j-11]-ay[i][j-1];
}
}
for(j=2;j<=n;j++)
{
for(i=0;i<n-j;i++)
{
diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
}
}
i=0;
do {
i++;
}
while(arr[i][0]<x);
i--;
p=(x-arr[i][i-1])/h;
y1=p*(diff[i][1]+diff[i-1][1])/2;
y2=p*p*diff[i-1][2]/2;
y3=p*(p*p-1)*(diff[i-1][3]+diff[i-2][3])/6;
y4=p*p*(p*p-1)*diff[i-2][4]/24;
y=ay[i][i-1]+y1+y2+y3+y4;
printf("\n\n When x=%6.2f, y=%6.8f",x,y);
getch();
}
