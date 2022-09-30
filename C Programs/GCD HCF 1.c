#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two number for find GCD/HCF:");
    scanf("%d %d",&a,&b);
    a=(a>0)?a:-a;
    b=(b>0)?b:-b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    printf("GCD is %d",a);
    getch();
}
