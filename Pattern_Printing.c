#include <stdio.h>

int main()
{
    int n,m,option;
    printf("**********MENU**********\n1)HOLLOW RECTANGLE\n2)NUMBER PYRAMID\n3)PATTERN PRINTING\n************************\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        scanf("%d %d",&m,&n);
        printf("HOLLOW RECTANGLE\n");
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==m-1||j==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        }
        break;
        case 2:
        scanf("%d",&n);
        printf("NUMBER PYRAMID\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
            printf("  ");
            }
            for(int j=1;j<=i;j++)
            {
            printf("%d ",j);
            }
        
            for(int j=i-1;j>=1;j--)
            {
            printf("%d ",j);
            }
            printf("\n");
        }
        break;
        case 3:
        scanf("%d",&n);
        printf("PATTERN PRINTING\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                printf("  ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                if(j==1 || j==i || i==n)
                {
                printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(j==1 || i==n || j==i)
                {
                printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                printf("  ");
            }
            for(int j=1;j<=i;j++)
            {
                if(j==1||j==i||i==n)
                {
                printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            int c=i;
            for(int j=n;j>i;j--)
            {
                printf("  ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d ",c);
                c--;
            }
            c=2;
            for(int j=1;j<i;j++)
            {
                printf("%d ",c);
                c++;
            }
            printf("\n");
        }
        for(int i=n-1;i>=1;i--)
        {
            int c=i;
            for(int j=n;j>i;j--)
            {
                printf("  ");
            }
            for(int j=i;j>=1;j--)
            {
                printf("%d ",c);
                c--;
            }
            c=2;
            for(int j=1;j<i;j++)
            {
                printf("%d ",c);
                c++;
            }
            
            printf("\n");
        }
        printf("\n");
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if( i==1 || j==1 || i==n || j==n-i+1 || i==j || j==n)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
        printf("\n");
        }
        printf("\n");
        int p;
        p=(n*(n+1))/2;
        for(int i=n;i>=1;i--)
        {
            int pr=p,d=n;
            for(int j=i;j>=1;j--)
            {
                printf("%d ",pr);
                pr-=d;
                d-=1;
            }
            printf("\n");
            p--;
        }
        printf("\n");
        for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        for(int j=n-i;j>0;j--)
        {
            printf("%d",c++);
            if(j==1)
            {
                continue;
            }
            else
            {
                printf("*");
            }
        }
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    int r,d,c;
    r=(n*2)-1;
    d=n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>i;j--)
        {
            printf("%d ",j);
        }
        for(int j=r;j>=1;j--)
        {
            printf("%d ",d);
        }
        for(int j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
        d--,r=(d*2)-1;
        printf("\n");
    }
    c=2;
    for(int i=n;i>1;i--)
    {
        d=n,r=c+1;
        for(int j=i-1;j>1;j--)
        {
            printf("%d ",d--);
        }
        for(int j=1;j<(c*2);j++)
        {
            printf("%d ",c);
        }
        for(int j=i-1;j>1;j--)
        {
            printf("%d ",r++);
        }
        c++;
        printf("\n");
    }
        break;
        
    }
}
