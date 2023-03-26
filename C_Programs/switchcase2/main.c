#include <stdio.h>
void main()
{
    int a=519;
    switch(a)
    {
        case 1:printf("Hi\n");
        break;
        case 2:
        case 3:
        case 4:printf("Hello\n");
        break;
        case 5:printf("Bye\n");
        break;
        case 6:printf("TC\n");
        break;
        default:printf("Invalid");
    }
}
