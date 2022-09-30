#include<stdio.h>
#include<conio.h>
int Reverse(int item)
{
    int r,sum=0;
    while(item)
    {
        r=item%10;
        sum=sum*10+r;
        item=item/10;
    }
    printf("%d",sum);
}
void main()
{
    int item;
    printf("Enter any number for reverse:");
    scanf("%d",&item);
    printf("After reverse number:");
    Reverse(item);
    getch();
}
