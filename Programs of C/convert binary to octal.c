#include<stdio.h>
#include<conio.h>
void main()
{
    int item;
    printf("Enter number in binary to convert octal:");
    scanf("%d",&item);
    printf("After convert octal number is:");
    item=convertdecimal(item);
    convertbinary(item);
    getch();
}
int convertdecimal(int item)
{
    int rem,q=1,sum=0;
    while(item)
    {
        rem=item%10;
        sum=sum+rem*q;
        q=q*2;
        item=item/10;
    }
    return sum;
}
int convertbinary(int item)
{
    int rem;
    if(item==0)
        return;
    rem=item%8;
    item=item/8;
    convertbinary(item);
    printf("%d",rem);
    return;
}
