#include<stdio.h>
#include<conio.h>
void main()
{
    int item;
    printf("Enter number in decimal to convert octal:");
    scanf("%d",&item);
    printf("After convert octal number is:");
    convert(item);
    getch();
}
void convert(int item)
{
    int rem;
    if(item==0)
        return;
    rem=item%8;
    item=item/8;
    convert(item);
    printf("%d",rem);
    return;
}
