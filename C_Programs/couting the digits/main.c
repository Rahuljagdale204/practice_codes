#include <stdio.h>
void main()
{
   int i, count=0;
    printf("Enter the number:\n");
    scanf("%d",&i);
    while(i>0)
    {
      count++;
      i=i/10;
    }
    printf("count=%d",count);
}
