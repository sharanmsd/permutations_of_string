#include<stdio.h>
#include<string.h>
int ct=1;
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permute(char *s,int l,int r)
{
    int i;
    if(l==r)
    {
        printf("%d %s\n",ct,s);
        ct++;
    }
    else
    {
        for(i=l;i<=r;i++)
        {
            swap((s+l),(s+i));
            permute(s,l+1,r);
            swap((s+l),(s+i));
        }
    }
}
int main() {
    char s[1000];
    int i,j,k,l;
    scanf("%s",s);
    l=strlen(s);
    permute(s,0,l-1);
}
