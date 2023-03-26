#include <stdio.h>
void interchange(int *num1,int *num2)
{
    int tmp;
    tmp=*num1;
    *num1=*num2;
    *num2=tmp;
}
int main()
{
    int num1=50,num2=70;
    interchange(&num1,&num2);
    printf("num1=%d\n",num1);
    printf("num2=%d",num2);
    return 0;
}
