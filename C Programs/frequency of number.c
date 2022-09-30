#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int a[size],i,j,k,c=1,p=0,s;
    printf("Enter array size:");
    scanf("%d",&s);
    printf("Enter array element:");
    for(i=0; i<s; i++)
        scanf("%d",&a[i]);
    for(i=0; i<s; i++)
    {
        for(j=i; j<s; j++)
        {
            if(j==i)
            {
                 for(k=0; k<i; k++)
                 {
                     if(a[i]==a[k])
                     {
                         p++;
                     }
                 }
            }
            if(p==0)
            {
                if(a[i]==a[j+1])
                {
                    c++;
                }
            }
        }
        if(p==0)
        {
             printf("Frequency of %d is %d\n",a[i],c);
             c=1;
        }
        else
        {
            p=0;
        }
    }
    getch();
}
