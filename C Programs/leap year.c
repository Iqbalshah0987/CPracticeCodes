#include<conio.h>
#include<math.h>
int main()
{
    int y;
    printf("Enter any year to check leap year or not:");
    scanf("%d",&y);
    if(y%4==0)
        if(y%100!=0)
            printf("%d is leap year.",y);
    else if(y%400==0)
        printf("%d is leap year.",y);
    else
        printf("%d is not leap year.",y);
    getch();
}
