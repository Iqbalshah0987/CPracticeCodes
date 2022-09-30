#include<conio.h>
#include<math.h>
int main()
{
    int y;
    printf("Enter any number to check negative and positive:");
    scanf("%d",&y);
    if(y>0)
        printf("%d is positive.",y);
    else
        printf("%d is negetive.",y);
    getch();
}
