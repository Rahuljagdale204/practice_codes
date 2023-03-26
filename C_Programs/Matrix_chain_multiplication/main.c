#include <stdio.h>
int string1(int p[], int n)
{
    int INT_MAX = 9999999;
    int m[n][n];
    int i, j, k, L, q;

    for (i=1; i<n; i++)
        m[i][i] = 0;


    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;

            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                }
            }
        }
    }

    return m[1][n-1];

}

int main()
{
    int n,i;
    printf("Enter number of array elements: -\n");
    scanf("%d",&n);

    int array[n];

    printf("Enter the elements of array: - \n");

    for(i=0;i<n;i++)
    {
        printf("Enter %dth:- ",i+1);
        scanf("%d",&array[i]);
    }

    int diff = sizeof(array)/sizeof(array[0]);

    printf("Minimum number of multiplications is %d \n", string1(array, diff));
   getch();
    return 0;
}
