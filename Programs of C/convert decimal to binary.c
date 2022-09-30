#include<stdio.h>
#include<conio.h>
void main()
{
    int item;
    printf("Enter number in decimal to convert binary:");
    scanf("%d",&item);
    printf("After convert binary number is:");
    convert(item);
    getch();
}
int convert(int item)
{
    int rem;
    if(item==0)
        return;
    rem=item%2;
    item=item/2;
    convert(item);
    printf("%d",rem);
    return;
}
