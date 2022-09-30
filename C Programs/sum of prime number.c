#include<stdio.h>
#include<conio.h>
int checkprime(int);
void main()
{
    int n,a,i;
    printf("Enter a number for divided in prime number:");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
    {
        if(checkprime(i)==1)
        {
            if(checkprime(n-i)==1)
            {
                a=n-i;
                printf("%d=%d+%d\n",n,i,a);
            }

        }
    }
    getch();
}
int checkprime(int a)
{
    int i,c=0;
    for(i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    return(c);
}
