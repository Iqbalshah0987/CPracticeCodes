#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter natural number for sum:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        sum=sum+i;
    printf("sum is %d",sum);
    getch();
}
