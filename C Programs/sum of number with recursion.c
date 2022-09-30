#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int n,s;
    printf("Enter natural number for sum:");
    scanf("%d",&n);
    s=sum(n);
    printf("sum is %d",s);
    getch();
}
int sum(int a)
{
    if(a!=0)
    {
        return a+sum(a-1);
    }
    else
        return(a);
}
