#include<stdio.h>
#include<conio.h>
#define size 10
void printmatrix1(int [][size],int,int);
void printmatrix2(int [][size],int,int);
void multiply(int [][size],int [][size],int [][size],int,int,int,int);
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
    printmatrix1(a,r1,c1);   //call function for print matrix 1.
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
    printmatrix2(b,r2,c2);     //call function for print matrix 2.
    multiply(a,b,c,r1,c1,r2,c2);   //call function for multiply matrix 1 and matrix 2.
    getch();
}
void printmatrix1(int a[][size],int r1,int c1)
{
    int i,j;
    printf("First matrix is:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void printmatrix2(int b[][size],int r2,int c2)
{
    int i,j;
    printf("Second matrix is:\n");
    for(i=0; i<r2; i++)
    {
      for(j=0; j<c2; j++)
      {
          printf("%d ",b[i][j]);
      }
      printf("\n");
    }
}
void multiply(int a[][size],int b[][size],int c[][size],int r1,int c1,int r2,int c2)
{
    int i,j,k;
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
}
