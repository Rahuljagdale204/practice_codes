#include<stdio.h>
int main()
{
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);

    unsigned int *t =malloc(n*sizeof(unsigned int));
	for(i=0;i<n;i++)
	{
		scanf("%lu",(t+i));
	}

	for(i=0;i<n;i++)
	{
		if(t[i] % k == 0)
			count++;
	}
	printf("%d",count);
	return 0;
}
