#include <stdio.h>
#include <string.h>

void main()
{
   char str[100];
   printf("Enter the string: ");
   gets(str);
   printf("\n The string after strset is %s",strset(str, '*'));
}
