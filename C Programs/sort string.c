#include<stdio.h>
#include<conio.h>
#include<string.h>
void sortstring(char [][20]);
void main()
{
    char str[5][20],s[10];
    int i,j,r;
    printf("Enter five names:\n");
    for(i=0; i<5; i++)
        gets(str[i]);
    sortstring(str);
     printf("sorted name:\n");
     for(i=0; i<5; i++)
        puts(str[i]);
    getch();
}
void sortstring(char str[][20])
{
    char s[20];
    int i,j,r;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            r=strcmp(str[j],str[j+1]);
            if(r>0)
            {
                strcpy(s,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],s);
            }
        }
     }
}
