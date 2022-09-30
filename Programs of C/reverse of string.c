#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int l,i;
    char str[50],ch;
    printf("Enter string:");
    gets(str);
    for(l=1; str[l]!=NULL; l++);
    printf("Length is %d\n",l);
    for(i=0; i<(l)/2; i++)
    {
        ch=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=ch;
    }
    printf("After reverse string is:");
    puts(str);
    getch();
}
