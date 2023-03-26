#include <stdio.h>
int main()
{
    int T,i,arr[100001]={0},b;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&b);
        arr[b]++;
    }
    for(i=0;i<100001;i++)
    {
        while(arr[i]>0)
        {
            printf("%d\n",i);
            arr[i]--;
        }
    }
}
