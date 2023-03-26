
#include<stdio.h>
void main()
{
    char c[1000],ch;
    int i,count=0;
    printf("Enter the string: ");
    gets(c);
    printf("Enter the character to find the frequency: ");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';++i)
    {
        if(ch==c[i])
            ++count;
    }
    printf("Frequency of %c=%d",ch,count);
}
