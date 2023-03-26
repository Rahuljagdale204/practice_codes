#include<stdio.h>
void main()
{
    int i,c=0;
    printf("The numbers between 1 to 100 which are not divisible by 7,13 and 17\n");
    for(i=1;i<=100;i++)
    {
        if(i%7!=0&&i%13!=0&&i%17!=0)
        {
            printf("%d\t",i);
            c++;
        }

    }
    printf("\n total numbers are %d\n",c);
}
