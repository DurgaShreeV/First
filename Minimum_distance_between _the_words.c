/*Minimum distance between the words using C*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i=0,min=200;
    while(scanf("%s",s[i])==1)
    {
        i++;
    }
    strcpy(a,s[i-2]);
    strcpy(b,s[i-1]);
    i-=2;
    int in1[100],in2[100],l=0,r=0;
    for(int j=0;j<i;j++)
    {
        if(strcmp(a,s[j])==0)
        {
            in1[l++]=j;
        }
        if(strcmp(b,s[j])==0)
        {
            in2[r++]=j;
        }
    }
    for(int j=0;j<l;j++)
    {
        for(int k=0;k<r;k++)
        {
            int c=abs(in1[j]-in2[k]);
            if(c<min && c!=0)
            {
                min=c;
            }
        }
    }
    printf("%d",min);
    return 0;
}

