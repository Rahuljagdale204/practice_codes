#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int ksack(int cap, int wt[], int val[], int n)
{
   int i, c;
   int K[n+1][cap+1];
   for (i = 0; i <= n; i++)
   {
       for (c = 0; c <= cap; c++)
       {
           if (i==0 || c==0)
               K[i][c] = 0;
           else if (wt[i-1] <= c)
                 K[i][c] = max(val[i-1] + K[i-1][c-wt[i-1]],  K[i-1][c]);
           else
                 K[i][c] = K[i-1][c];
       }
   }
   return K[n][cap];
}

int main()
{
    int i, n, val[20], wt[20], cap;

    printf("Enter number of items: -\n");
    scanf("%d", &n);

    printf("Enter value and weight of items:\n");
    for(i = 0;i < n; ++i){
            printf("%d(th) value:\n",(i+1));
    	scanf("%d", &val[i]);
       printf("%d(th) Weight:\n",(i+1));
       scanf("%d",&wt[i]);
    }

    printf("Enter capacity of knapsack: -\n");
    scanf("%d", &cap);

    printf("\nMaximum value without exceeding the capacity is %d\n", ksack(cap, wt, val, n));
    return 0;

}
