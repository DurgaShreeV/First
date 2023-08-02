/*Selection Sort using C*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int s=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[s])
            {
                s=j;           //Replace the index with smallest number in the array
            }
        }
        int t=a[i];            //Swap the ith index element with the smallest element in the array
        a[i]=a[s];
        a[s]=t;
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
}
