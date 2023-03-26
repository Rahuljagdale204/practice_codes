#include<stdio.h>

int main(){
    long long int num,ctr=0,m = 1000000007;
    scanf("%lld",&num);
    long long int fact=1;
    for (long long int i=num;i>0;i--){
        fact=(fact*i)%m;
    }
    //printf("%d",fact);
    //Counting number of digits in fact
    int rem;
    while(fact>0){
        rem=fact%10;
        ctr++;
        fact/=10;
    }
    printf("Number of digits in factorial of %lld is %lld",num,ctr);
    return 0;
}
