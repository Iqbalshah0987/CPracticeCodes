#include<conio.h>
void main()
{
    long long n,r,rev=0;
    printf("Enter the number for count digits:");
    scanf("%lld",&n);
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse number is %lld",rev);
    getch();
}
