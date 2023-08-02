/*Bubble sort using C*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        for(int k=0;k<n;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
        }
    }
    printf("\n");
}
