#include <stdio.h>

void main()
{
    int a,b,c;
    char ch;
    printf("enter any character +,-,*,/ to perform operation\n",ch);
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':printf("Enter the two operands\n");
                scanf("%d,%d",&a,&b);
                 c=a+b;
                 printf("addition=%d\n",c);
        case '-':printf("Enter the two operands\n");
                scanf("%d,%d",&a,&b);
                c=a-b;
                printf("subtraction=%d\n",c);
        case '*':printf("Enter the two operands\n");
                scanf("%d,%d",&a,&b);
                 c=a*b;
                 printf("multiplication=%d\n",c);
        case '/':printf("Enter the two operands\n");
                scanf("%d,%d",&a,&b);
                 c=a/b;
                 printf("division=%d\n",c);
                 default:printf("invalid\n");
    }
}
