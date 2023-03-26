
#include <stdio.h>
void fun(int*p)
{
    int i, arr567[10];

    printf("%d\n",*p);
    p++;
    printf("%d",*p);
}
int main()
{
   int arr123[10]= {1,2,3,4,5,6};
   fun(&arr123[0]);
   return 0;

}
