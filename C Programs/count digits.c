#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,c=0;
    printf("Enter the number for count digits:");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    printf("Digits are %d",c);
    getch();

    return 0;
}
