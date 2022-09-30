#include<conio.h>
void main()
{
    int n,i,c=0,k;
    printf("Enter a number for check prime number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=1;k<=i; k++)
        {
             if(i%k==0)
             {
                c++;
             }
        }
        if(c==2)
            printf("%d is prime number.\n",i);
        c=0;
    }
    getch();
}
