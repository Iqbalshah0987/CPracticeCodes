#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int a[size][size],b[size][size],c[size][size],i,j,k,r1,c1,r2,c2;
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
    if(c1==r2)
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                c[i][j]=0;    //initialize zero of all elements;
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                for(k=0; k<r1; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];  //for multiply of matrix.
                }
            }
        }
        printf("Multiply of matrix element:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",c[i][j]);   //print third matrix.
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible.");
    }
    getch();
}
