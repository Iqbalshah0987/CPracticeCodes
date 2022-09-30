#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    int l;
    printf("Enter a string:");
    gets(s);
    for(l=0; s[l]!=NULL; l++);
    printf("Length of a string %d\n",l);
    printf("Length of a string %d",strlen(s));   //string length function.
    getch();
}

