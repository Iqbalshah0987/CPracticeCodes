#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,g;
    printf("Enter five values for find average:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    g=a[0];
    for(i=1; i<5; i++)
    {
        if(a[i]>g)
        {
            g=a[i];
        }
    }
    printf("Largest value is %d",g);
    getch();
}
