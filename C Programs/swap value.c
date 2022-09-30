#include<conio.h>
int main()
{
    int a,b,t;
    printf("Enter two value for swap:");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("After swapping the value is %d and %d",a,b);
    getch();
}
