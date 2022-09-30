#include<conio.h>
void main()
{
    int a,b,i,lcm,max;
    printf("Enter two number for find LCM:");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    for(i=max; i<=a*b; i=i+max)
    {
       if((i%a==0)&&(i%b==0))
       {
           lcm=i;
           break;
       }
    }
    printf("LCM is %d",lcm);
    getch();
}
