#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int a[size][size],b[size][size],c[size][size],i,j,r1,c1,r2,c2;
    printf("Enter first matrix rows and columns:");
    scanf("%d %d",&r1,&c1);
    printf("Enter first matrix element:");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second matrix rows and columns:");
    scanf("%d %d",&r2,&c2);
    printf("Enter second matrix element:");
    for(i=0; i<r2; i++)
    {
      for(j=0; j<c2; j++)
      {
          scanf("%d",&b[i][j]);
      }
    }
    for(i=0; i<r2; i++)
    {
      for(j=0; j<c2; j++)
      {
          printf("%d ",b[i][j]);
      }
      printf("\n");
    }
    if(r1==r2)
    {
        if(c1==c2)
        {
             printf("Sum of matrix:\n");
             for(i=0; i<r1; i++)
             {
                 for(j=0; j<c1; j++)
                 {
                     c[i][j]=a[i][j]+b[i][j];
                     printf("%d ",c[i][j]);
                 }
                 printf("\n");
             }
        }
        else
        {
            printf("matrix columns are not match.");
        }
    }
    else
    {
        printf("matrix columns are not match.");
    }
    getch();
}
