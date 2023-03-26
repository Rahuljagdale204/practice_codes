#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter the number of equation: \n");
    scanf("%d",&n);
    float a[n][n],x[n],b[n];
    int i,j,p,q;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]",i+1,j+1);
            scanf("%f",&a[i][j]);
        }}
        for(q=0;q<n;q++){
            printf("Enter the constant for equation %d:\n",q+1);
        scanf("%f",&b[q]);
        }
     for(q=0;q<n;q++)
     {
         printf("Enter the initial approx for equation x%d\n",q+1);
         scanf("%f",&x[q]);
     }
     float sum=0;
     int maxItter,l,s;
     printf("Enter the number of Iteration:\n");
     scanf("%d",&maxItter);
     for(l=0;l<maxItter;l++){
        for(i=0;i<n;i++){
            sum=0;
            for(j=0;j<n;j++){
                if(i!=j){
                    sum+=(a[i][j]*x[j]);
                }
            }
            x[i]=(1/a[i][i]*(b[i]-sum));
            printf("x%d=%f\n",i+1,x[i]);
        }
        printf("\n");
     }
     for(s=0;s<n;s++)
        printf("x%d = %f\n",s+1,x[s]);
}
