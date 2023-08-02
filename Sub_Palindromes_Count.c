/*Sub Palindromes Count using C*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[200];
    int c=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=strlen(s)-1;j>i;j--)
        {
            if(s[i]==s[j])
            {
                int flag=0;
                for(int l=i,r=j;l<r;l++,r--)
                {
                    if(s[l]==s[r])
                    {
                        printf("%c",s[l]);
                    }
                    else
                    {
                        printf("\n");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    c++;
                }
            }
        }
    }
    printf("%d",c);
}

