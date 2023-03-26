// #include<stdio.h>

// int series(int n){
//     if(n<=0){
//         return n;
//     }
//     else{
//         return series(n-1)+series(n-2);
//     }
// }

// int main(){
//     int i,n;
//     printf("Enter the number :\n");
//     scanf("%d",&n);
//     // int m = series(n);
//     printf("%d",series(n));

//     return 0;
// }

#include<stdio.h>

// recursive function for finding nth Fibonacci term
int fibonacci(int n)
{
      if(n<=0)
          return n; //base case
      else //general case
          return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
     int num;
     printf("Which term of Fibonacci series you want to find: ");
     scanf("%d",&num);
     for(int i=0;i<num;i++){
         printf("%d\t",fibonacci(i));
     }
     return 0;
}
