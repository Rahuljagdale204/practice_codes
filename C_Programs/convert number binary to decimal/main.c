#include <stdio.h>
void main()
{
    char a[15];
    int decimal=0, binary, rem, weight=1, num2, num3, rem2, rem3, oct=0, k=1, m=0;
    printf("Enter the binary number: \n");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        binary=binary/10;
        decimal= decimal+(rem*weight);
        weight= weight*2;

    }

    printf("The decimal number is %d\n",decimal);


    printf("for octal\n");
     num2=decimal;
    while(num2!=0)
    {
        rem2=num2%8;
        num2=num2/8;
        oct=oct+(rem2*k);
        k=k*10;

    }
    printf("The octal-Representation is %d\n",oct);

    num3=decimal;
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
printf("The Hexa-decimal-Representation is %s\n",a);

}

