#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,item,r,sum=0,i;
    printf("Enter number to check even or odd:");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is even number.\n",n);
    else
        printf("%d is odd number.\n",n);
    if((n/2)*2==n)
        printf("%d is even number.\n",n);
    else
        printf("%d is odd number.\n",n);
    if(n&1)
        printf("%d is odd number.\n",n);
    else
        printf("%d is even number.\n",n);
    getch();
}
