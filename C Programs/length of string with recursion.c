#include<stdio.h>
#include<conio.h>
char length(char []);
void main()
{
    char s[20],ch;
    int l,i;
    printf("Enter a string:");
    gets(s);
    printf("Length is %d",length(s));
    getch();
}
char length(char s[])
{
    char l='0';
    if(s[l]!=NULL)
    {
        l++;
        return length(s);
    }
    else
        return(l+1);
}
