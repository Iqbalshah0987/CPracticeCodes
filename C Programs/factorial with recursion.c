#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,s;
    printf("Enter natural number for sum:");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %d",s);
    getch();
}
int fact(int a)
{
    if(a!=1)
    {
        return a*fact(a-1);
    }
    else
        return(a);
}
