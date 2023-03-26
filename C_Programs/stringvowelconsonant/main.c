#include <stdio.h>
void main()
{
    char line[1000];
    int i,v,c,d,s,ch,o;
    o=v=c=d=s=0;
    printf("Enter the string: ");
    gets(line);
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
            v++;
        else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
            c++;
            else if(line[i]>='0'&&line[i]<='9')
            d++;
        else if(line[i]==' ')
            s++;
    }
    printf("\nvowels:%d",v);
    printf("\nconsonants:%d",c);
    printf("\nDigits:%d",d);
    printf("\nWhite space:%d",s);
}
