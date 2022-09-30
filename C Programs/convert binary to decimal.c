#include<stdio.h>
#include<conio.h>
int decimal(long long);
void main()
{
    long long n;
    printf("Enter binary number:");
    scanf("%lld",&n);
    printf("Binary number = %lld and Decimal number = %d",n,decimal(n));
    getch();
}
int decimal(long long n)
{
    int r,q=1,dec=0;
    long long bin=0;
    while(n!=0)
    {
        r=n%10;
        dec=dec+r*q;
        q=q*2;
        n=n/10;
    }
    return(dec);
}
