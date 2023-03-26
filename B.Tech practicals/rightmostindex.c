#include<stdio.h>

int getindex(char sour[],char sub[]){
    int ans = -1;
    int j,k;

    for(int i=0;sour[i]!='\0';i++)
    {
        for( j=i,k=0;sub[k]!='\0' && sour[j]==sub[k];j++,k++) 
        ;                           
        if(k>0 && sub[k] == '\0')
            ans = i; 
    }
    
    return ans;

}

int main(){
    char sour[101];
    gets(sour);
    char sub[101];
    gets(sub);

    int found = getindex(sour,sub);
    if(found==-1){
        printf("substring not found\n");
    }
    else{
        printf("%d\n",found);
    }
    return 0;
}