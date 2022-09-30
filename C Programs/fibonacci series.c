#include<conio.h>
int main()
{
    int a,b,c,n,i;
    printf("Enter a terms of fibonacci series:");
    scanf("%d",&n);
    a=0; b=1;
    printf("fibonacci series is:\n%d %d ",a,b);
    i=1;
    while(i<=(n-2))
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    getch();
}
