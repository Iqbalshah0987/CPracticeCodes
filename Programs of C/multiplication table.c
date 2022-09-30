#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int item,i;
    printf("which number you want to print table:");
    scanf("%d",&item);
    printf("Table is:\n");
    for(i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n",item,i,item*i);
    }
    getch();
}
