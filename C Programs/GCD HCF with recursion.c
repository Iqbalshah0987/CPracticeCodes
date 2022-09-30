#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers for find gcd/hcf:");
    scanf("%d %d",&a,&b);
    a=(a>0)?a:-a;
    b=(b>0)?b:-b;
    printf("GCD/HCF of %d and %d is %d",a,b,gcd(a,b));
    getch();
}
int gcd(int a,int b)
{
    if(a>b)
    {
        return gcd(a-b,b);
    }
    else if(b>a)
    {
        return gcd(a,b-a);
    }
    else
        return(a);
}
