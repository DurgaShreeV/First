/*Insertion Sort using C*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[100],temp,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        for(int k=0;k<n;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
}
