#include<conio.h>
#include<math.h>
void main()
{
    long long a,b,i,mul=1,p;
    printf("Enter base numbber:");
    scanf("%lld",&a);
    printf("Enter power:");
    scanf("%lld",&b);
    for(i=1; i<=b; i++)
    {
        mul=mul*a;
    }
    printf("%lld power of %lld is %lld\n",a,b,mul);
    p=pow(a,b);
    printf("%lld power of %lld is %lld",a,b,p);
    getch();
}
