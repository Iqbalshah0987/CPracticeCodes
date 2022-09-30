#include<stdio.h>
#include<conio.h>
long long binary(int);
void main()
{
    int n;
    printf("Enter a numbers for find binary:");
    scanf("%d",&n);
    printf("Decimal number = %d and Binary number = %lld",n,binary(n));
    getch();
}
long long binary(int n)
{
    int r,i=1;
    long long bin=0;
    while(n!=0)
    {
        r=n%2;
        bin=bin+r*i;
        i=i*10;
        n=n/2;
    }
    return(bin);
}
