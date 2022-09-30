#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=1;;
    printf("Enter number for find factorial:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        f=f*i;
    }
    printf("Factorial is %d",f);
    getch();
}
