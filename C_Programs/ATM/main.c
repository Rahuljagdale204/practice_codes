#include <stdio.h>

int main()
{
   int x;	float y;
   scanf("%d %f",&x,&y);
   	if(y>0.5+x && x%5==0)
	{
	    printf("%.2f",y-x-0.50);
	}
	else
	{
	printf("%.2f",y);
    }
    return 0;
}
