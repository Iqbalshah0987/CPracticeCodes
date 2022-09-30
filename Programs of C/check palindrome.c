#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,item,r,sum=0;
    printf("Enter number for palindrome number:");
    scanf("%d",&n);
    item=n;
    while(n)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(item==sum)
        printf("%d is Palindrome number.",item);
    else
        printf("%d is not palindrome number.",item);
    getch();
}
