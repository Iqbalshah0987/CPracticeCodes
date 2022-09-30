#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter a number for find factors:");
    scanf("%d",&n);
    i=1;
    printf("Factors are:");
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    getch();
}
