#include <stdio.h>
#include<math.h>
void main()
{
    char a[15];
    int num,num1, num2,num3, var, rem,bin=0, i=1, rem2,rem3,m=0, oct=0,k=1;
    printf("Enter the decimal number:\n");
    scanf("%d",&num);
    num1=num;
    var=num1;
printf("for Binary\n");
    while(num1!=0)
    {
        rem=num1%2;
        num1=num1/2;
        bin=bin+(rem*i);
        i=i*10;

    }
    printf("The binary of %d is %d\n",var,bin);
    num2=num;

    printf("for octal\n");

    while(num2!=0)
    {
        rem2=num2%8;
        num2=num2/8;
        oct=oct+(rem2*k);
        k=k*10;

    }
    printf("The octal of %d is %d\n",var,oct);
    num3=num;
    printf("for hexadecimal\n");

     while(num3!=0)
{
  rem3=num3%16;
  if(rem3>9)
    a[m]= (char)(rem3+55);
    else
    a[m]= (char) (rem3+48);

  num3=num3/16;
  m++;

}
a[m]='\0';
strrev(a);
printf("The hexa decimal of %d is %s\n",var,a);
}
