#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20],ch;
    int l,i;
    printf("Enter a string:");
    gets(s);
    for(l=0; s[l]!=NULL; l++);
    printf("Length of a string %d\n",l);
    for(i=0; i<=l/2; i++)
    {
        ch=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=ch;
    }
    printf("Reverse string is:");
    puts(s);
    strrev(s);       //string reverse function.
    printf("Reverse string is:");
    puts(s);
    getch();
}

