#include<stdio.h>
#include<conio.h>
int octal(int);
void main()
{
    int n;
    printf("Enter a numbers for find octal:");
    scanf("%d",&n);
    printf("Decimal number = %d and Octal number = %d",n,octal(n));
    getch();
}
int octal(int n)
{
    int r,i=1,oct=0;
    while(n!=0)
    {
        r=n%8;
        oct=oct+r*i;
        i=i*10;
        n=n/8;
    }
    return(oct);
}
