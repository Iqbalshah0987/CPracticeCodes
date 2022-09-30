#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,b,c,i;
    printf("Enter range for fibonacci series:");
    scanf("%d",&n);
    a=0;b=1;
    printf("%d %d ",a,b);
    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
}
