#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int a[size],i,j,k,s;
    printf("Enter array size:");
    scanf("%d",&s);
    printf("Enter array element:");
    for(i=0; i<s; i++)
        scanf("%d",&a[i]);
    printf("New array is:");
   for(i=0; i<s; i++)
   {
       for(j=i+1; j<s;)
       {
           if(a[i]==a[j])
           {
               for(k=j; k<s; k++)
               {
                   a[k]=a[k+1];
               }
               s--;
           }
           else
           {
               j++;
           }
       }
   }
   for(i=0; i<s; i++)
   {
       printf("%d ",a[i]);
   }
    getch();
}
