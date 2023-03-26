#include <stdio.h>
void main()
{
    char a[15];
    int decimal=0,k, weight=1, num1, bin=0, oct=0, num2, rem1, rem2,i=1, c=1;

    printf("Enter the hexa decimal number: \n");
    scanf("%s",&a);
    strupr(a);

     for(k=strlen(a)-1;k>=0;k--)
     {
         if(isupper((a[k])))
            decimal = decimal+((a[k]-55)* weight);
         else
            decimal= decimal+ ((a[k]-48)* weight);
         weight=weight*16;
     }

    printf("The decimal number is %d\n",decimal);
    num1=decimal;
     while(num1!=0)
    {
        rem1=num1%2;
        num1=num1/2;
        bin=bin+(rem1*i);
        i=i*10;

    }
    printf("The binary representation is %d\n",bin);
    num2=decimal;
    while(num2!=0)
    {
        rem2=num2%8;
        num2=num2/8;
        oct=oct+(rem2*c);
        c=c*10;

    }
    printf("The octal representation is %d\n",oct);

}
