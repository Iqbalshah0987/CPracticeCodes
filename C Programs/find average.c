#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    printf("Enter five values for find average:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    sum=sum/i;
    printf("Average is %d",sum);
    getch();
}
