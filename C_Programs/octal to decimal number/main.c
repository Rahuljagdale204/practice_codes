#include <stdio.h>
void main()
{
    char a[15];
    int decimal=0, octal, rem, weight=1, rem1, num1, bin=0, i=1, k=1,num3,rem3, m=0;
    printf("Enter the octal number: \n");
    scanf("%d",&octal);
    while(octal!=0)
    {
        rem=octal%10;
        octal=octal/10;
        decimal= decimal+(rem*weight);
        weight= weight*8;

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

    num3=decimal;

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
printf("The hexa decimal representation is %s\n",a);
}










