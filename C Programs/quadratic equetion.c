#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float D,root1,root2,realpart,imagpart;
    printf("Enter three number for quadratic equetion:");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    printf("Discriminant is %.4f\n",D);
    printf("squar root of Discriminant is %.4f\n",sqrt(D));
    if(D==0)
    {
        root1=root2=-b/(2*a);
        printf("Root1 and Root2 is %.4f",root1);
    }
    else if(D>0)
    {
        root1=(-b+sqrt(D))/2*a;
        root2=(-b-sqrt(D))/2*a;
        printf("Root1 is %.4f",root1);
        printf("Root2 is %.4f",root2);
    }
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-D)/(2*a);
        printf("Root1 is %.4f+%.4fi\n",realpart,imagpart);
        printf("Root2 is %.4f-%.4fi",realpart,imagpart);
    }
    getch();
}
