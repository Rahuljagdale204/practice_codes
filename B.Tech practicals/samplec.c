#include<stdio.h>

int Factorial(int n)
{   
    if(n==0)
    {
        return 1;
    }
    return n*Factorial(n-1);
}

int main()
{
    int iValue;
    int iRet=0;
    
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("%d",iRet);

    return 0;
}