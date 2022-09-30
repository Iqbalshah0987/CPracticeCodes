#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
    int a[size][size],i,j,r1,c1;
    printf("Enter first matrix rows and columns:");
    scanf("%d %d",&r1,&c1);
    printf("Enter matrix element:");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is:\n");
    for(i=0; i<c1; i++)
    {
        for(j=0; j<r1; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    getch();
}
