#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0,j;
    printf("Enter number range for find prime:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=2; j<i; j++)
            if(i%j==0)
                flag=1;
        if(flag==0)
            printf("%d is prime number.\n",i);
        flag=0;
    }
    getch();
}
