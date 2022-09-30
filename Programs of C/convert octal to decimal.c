#include<stdio.h>
#include<conio.h>
void main()
{
    int item;
    printf("Enter number in octal to convert decimal:");
    scanf("%d",&item);
    printf("After convert decimal number is:");
    convert(item);
    getch();
}
void convert(int item)
{
    int rem,q=1,sum=0;
    while(item)
    {
        rem=item%10;
        sum=sum+rem*q;
        q=q*8;
        item=item/10;
    }
    printf("%d",sum);
}
