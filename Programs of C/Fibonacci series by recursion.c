#include<stdio.h>
#include<conio.h>
int Fibonacci(int n)
{
    if((n==0)||(n==1))
        return 1;
    else
        return(Fibonacci(n-1)+Fibonacci(n-2));
}
void main()
{
    int n,a,b,c,i;
    printf("Enter range for fibonacci series:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        printf("%d ",Fibonacci(i));
    getch();
}
