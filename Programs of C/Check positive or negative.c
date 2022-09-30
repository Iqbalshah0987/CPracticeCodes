#include<stdio.h>
#include<conio.h>
void main()
{
    int item;
    printf("Enter any number for check positive or negative:");
    scanf("%d",&item);
    if(item>0)
        printf("%d is positive.",item);
    else
        printf("%d is negative.",item);
    getch();
}
