
#include <stdio.h>
int main()
{
    char s[1000],i;
    printf("Enter the string: ");
    scanf("%s",s);
    for(i=0; s[i]!='\0'; ++i);
    printf("Length of string=%d\n",i);
    return 0;
}
