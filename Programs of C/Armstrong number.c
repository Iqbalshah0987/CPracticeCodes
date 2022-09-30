#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,item,digit=0,r,sum=0;
    printf("Enter number for check armstrong number:");
    scanf("%d",&n);
    item=n;
    while(n)
    {
        digit++;
        n=n/10;
    }
    n=item;
    while(n)
    {
        r=n%10;
        sum=sum+pow(r,digit);
        n=n/10;
    }
    if(item==sum)
        printf("%d is Armstrong number.",item);
    else
        printf("%d is not Armstrong number.",item);
    getch();
}
