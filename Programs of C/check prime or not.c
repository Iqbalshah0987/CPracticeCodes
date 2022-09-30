#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0;;
    printf("Enter number for check prime or not:");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            flag=1;
    }
    if(flag==0)
        printf("%d is prime number.",n);
    else
        printf("%d is not prime number.",n);
    getch();
}
