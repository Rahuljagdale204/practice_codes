#include <stdio.h>
void main()
{
char a[]={'A','B','C','D'};
char *p=&a[0];
*p++;
printf("%c,%c",++*p,--*p);
}
