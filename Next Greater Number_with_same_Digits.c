/*Next Greater Number with same Digits using C*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    char s[1000];
    scanf("%s",s);
    int i,j,n=strlen(s);
    for(i=n-1;i>0;i--)
    {
        if(s[i]>s[i-1])
        {
            break;
        }
    }
    int x=s[i-1],small=i;
    for(j=i+1;j<n;j++)
    {
        if(s[j]>x && s[j]<s[small])
        {
            small=j;
        }
    }
    swap(&s[small],&s[i-1]);
    for(int k=i;k<n;k++)
    {
        for(int p=k+1;p<n;p++)
        {
            if(s[k]>s[p])
            {
                char t=s[k];
                s[k]=s[p];
                s[p]=t;
            }
        }
    }
    printf("%s",s);
}
