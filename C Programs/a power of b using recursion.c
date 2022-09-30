#include<stdio.h>
#include<conio.h>
int fun(int,int);
void main()
{
    int a,b;
    printf("Enter a base value:");
    scanf("%d",&a);
    printf("Enter power value:");
    scanf("%d",&b);
    printf("%d power of %d = %d",a,b,fun(a,b));
    getch();
}
int fun(int a,int b)
{
    if((a==1)||(b==0))
    {
        return 1;
    }
    else
    {
        return a*fun(a,b-1);
    }
}
