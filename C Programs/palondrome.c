#include<conio.h>
void main()
{
    int n,t,r,rev=0;
    printf("Enter a number for check palindrome:");
    scanf("%d",&n);
    t=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse is %d\n",rev);
    if(rev==t)
        printf("%d is palindrome.",t);
    else
        printf("%d is not palindrome.",t);
    getch();
}
