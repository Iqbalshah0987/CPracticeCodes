#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char *spacesremove(char *);
int countwords(char *);
void main()
{
    char str[50];
    int l,words;
    printf("Enter string:");
    gets(str);
    l=strlen(str);
    printf("String length is: %d",l);
    words=countwords(str);
    printf("\nNumber of words: %d",words);
    strcpy(str,spacesremove(str));
    printf("\n\tAfter remove spaces:");
    printf("\nString length is: %d",strlen(str));
    words=countwords(str);
    printf("\nNumber of words: %d",words);
    printf("\nNow string is:");
    puts(str);
    getch();
}
char *spacesremove(char *s)
{
    char *p;
    int i=0,j=0;
    p=(char *)malloc(sizeof(strlen(s)+1));
    while(s[i])
    {
        while(s[i]==' ')
            i++;
        while((s[i]!=' ')&&(s[i]!='\0'))
        {
            p[j]=s[i];
            i++;
            j++;
        }
        if((s[i]=='\0')&&(p[j-1]==' '))
            j--;
        p[j]=s[i];
        j++;
    }
    return p;
}
int countwords(char *s)
{
    int i=0,count=0;
    while(s[i])
    {
        if(s[i]==' ')
            count++;
        i++;
    }
    return(count+1);
}
