#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,item,r,sum=0,i;
    printf("Enter range above 100 for find palindrome number:");
    scanf("%d",&n);
    for(i=100; i<=n; i++)
    {
        item=i;
        while(item)
        {
            r=item%10;
            sum=sum*10+r;
            item=item/10;
        }
        if(i==sum)
            printf("%d is Palindrome number.\n",i);
        sum=0;
    }
    getch();
}
