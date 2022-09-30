#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int item,i;
    printf("Enter any number:");
    scanf("%d",&item);
    printf("All  prime factors are:");
    i=2;
    while(item!=1)
    {
        if(item%i==0)
        {
            printf("%d ",i);
            item=item/i;
        }
        else
            i++;
    }
    getch();
}
