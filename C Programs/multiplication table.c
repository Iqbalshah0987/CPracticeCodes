#include<conio.h>
int main()
{
    int n,i;
    printf("Enter an integer for table:");
    scanf("%d",&n);
    printf("Table is:\n");
    i=1;
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,(n*i));
        i++;
    }
    getch();
}
