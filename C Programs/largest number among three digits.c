#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three number and check largest:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("%d is largest.",a);
        else
            printf("%d is largest.",c);
    else if(b>c)
        printf("%d is largest.",b);
    else
        printf("%d is largest.",c);
    getch();
}
