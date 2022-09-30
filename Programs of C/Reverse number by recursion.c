#include<stdio.h>
#include<conio.h>
int Reverse(int item)
{
    int r;
    if(item==0)
        return;
    r=item%10;
    item=item/10;
    printf("%d",r);
    Reverse(item);
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
