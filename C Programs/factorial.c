#include<conio.h>
int main()
{
    int n,i;
    unsigned long long f=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    while(n)
    {
        f=f*n;
        n--;
    }
    printf("Factorial is %lld",f);
    getch();
}
