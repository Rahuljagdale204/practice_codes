#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	int i,j,a[30],n,temp;
	printf("Enter no. of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
			a[j+1]=temp;

	}
	printf("The sorted array is: -\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
    int ticks = clock();
    printf("\nThe Execution time: - %fsec\n", (float)ticks/CLOCKS_PER_SEC);
	getch();
}
