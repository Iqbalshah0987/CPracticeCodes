#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int item,i;
    printf("Enter any number:");
    scanf("%d",&item);
    printf("All factors are:");
    for(i=1; i<=item; i++)
    {
        if(item%i==0)
            printf("%d ",i);
    }
    getch();
}
