#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,row1,row2,col1,col2;
    printf("Enter first matrix row:");
    scanf("%d",&row1);
    printf("Enter first matrix column:");
    scanf("%d",&col1);
    printf("Enter first matrix element:");
    for(i=0; i<row1; i++)
        for(j=0; j<col1; j++)
            scanf("%d",&a[i][j]);
    printf("First matrix is:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Enter second matrix row:");
    scanf("%d",&row2);
    printf("Enter second matrix column:");
    scanf("%d",&col2);
    printf("Enter second matrix element:");
    for(i=0; i<row2; i++)
        for(j=0; j<col2; j++)
            scanf("%d",&b[i][j]);
    printf("second matrix is:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    if(row1==col2)
    {
        for(i=0; i<row1; i++)
            for(j=0; j<col2; j++)
                c[i][j]=0;
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                for(k=0; k<row2; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("After multiplication matrix:\n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
                printf("%d ",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication not possible.");
    getch();
}
