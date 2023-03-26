#include <stdio.h>
#include <conio.h>

void ksack(float capacity, int n, float weight[], float value[])
{

    float arr[100], maxvalue, y;
    int i, j;
    y=capacity;
    maxvalue=0;
    for(i=0;i<n;i++)
        arr[i]=0.0;
    for(i=0;i<n;i++)
    {
        if(weight[i] >y)
            break;
        else{
            arr[i]=1.0;
            maxvalue=maxvalue+value[i];
            y=y-weight[i];
        }
    }
    if(i<n)
        arr[i]=y/weight[i];
    maxvalue=maxvalue+(arr[i]*value[i]);
    printf("The selected values are: - \n");
    for(i=0;i<n;i++)
        if(arr[i]==1.0)
        printf("\nValue is %f with weight %f",value[i],weight[i]);
    else if(arr[i]>0.0)
    printf("\n%f part of value %f with weight %f",arr[i], value[i],weight[i]);
    printf("\nTotal value for % objects with capacity %f= %f\n",n,capacity,maxvalue);

}
void main()
{
    float weight[100],value[100], ratio[100],a1,a2,a3;
    int n;
    float capacity;
    int i,j;
    printf("Enter the number of objects: -\n");
    scanf("%d",&n);
    printf("\nEnter the capacity of Knapsack: -\n");
    scanf("%f",&capacity);
    for(i=0;i<n;i++){
        printf("\nEnter %d(th) Value:",(i+1));
        scanf("%f",&value[i]);
        printf("\nEnter %d(th) Weight:",(i+1));
        scanf("%f",&weight[i]);
        ratio[i]=value[i]/weight[i];
    }
    for(i=0;i<n;i++)
    for (j=0;j<n;j++){
        if(ratio[i]>ratio[j])
        {
            a1=ratio[i];
            ratio[i]=ratio[j];
            ratio[j]=a1;

            a2=weight[i];
            weight[i]=weight[j];
            weight[j]=a2;

            a3=value[i];
            value[i]=value[j];
            value[j]=a3;
        }
    }
    ksack(capacity, n, weight, value);
    getch();

}



