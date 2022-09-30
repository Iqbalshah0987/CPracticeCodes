#include<conio.h>
int main()
{
    int a,b,t;
    printf("Enter a value for check even or odd:");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is even.",a);
    else
        printf("%d is odd.",a);
    /*if(1&a)
        printf("%d is odd.",a);
    else
        printf("%d is even.",a);*/
   /* printf("Enter a value for check even or odd:");
    scanf("%d",&a);
    if(a/2*2==a)
        printf("%d is even.",a);
    else
        printf("%d is odd.",a);*/
    getch();
}
