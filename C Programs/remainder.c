#include<conio.h>
int main()
{
    int a,b,q,r;
    printf("Enter divident:");
    scanf("%d",&a);
    printf("Enter divisor:");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("Quotient is %d\nRemainder is %d",q,r);
    getch();
}
