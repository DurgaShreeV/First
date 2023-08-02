/*LCM using C*/
#include <stdio.h>

//EFFICIENT WAY METHOD-I => a*b = LCM(a,b) * GCD(a,b)

int GCD(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    GCD(b%a,a);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    int gcd=GCD(a,b);
    printf("The gcd/hcf is %d\n",gcd);
    
    int lcm=(a*b)/gcd;
    printf("The lcm is %d\n",lcm);
    
}

/************************************
               OR               
************************************/

/*TIME CONSUMING METHOD-II

int main()
{
    int mul,a,b,step;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    mul=(a>b)?a:b;
    step=mul;
    while(1)//while(mul%a!=0 || mul%b!=0)
    {
        if(mul%a==0 && mul%b==0)
        {
            break;
        }
        mul+=step;
    }
    printf("The lcm is %d",mul);
    return 0;
}*/

