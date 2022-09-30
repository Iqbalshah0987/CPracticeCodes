#include<stdio.h>
#include<conio.h>
#define size 50
int countwords(char []);
char* spaces(char s[]);
void main()
{
    char s[50];
    int l,words;
    printf("Enter string:");
    gets(s);
    for(l=0; s[l]!=NULL; l++);     // for find string length.
    printf("String length is %d\n",l);
    strcpy(s,spaces(s));
    l=strlen(s);       //for find string length.
    printf("After remove spaces, String length is %d\n",l);
    words=countwords(s);
    printf("Number of words %d",words);
    getch();
}
char* spaces(char s[])
{
    char *p;
    int i=0,j=0;
    p=(char *)malloc(strlen(s)+1);
    while(s[i])
    {
        while(s[i]==' ')
            i++;
        while((s[i]!=' ')&&(s[i]!=NULL))
        {
            p[j]=s[i];
            i++,j++;
        }
        if((s[i]==NULL)&&(p[j-1]==' '))
            j--;
        p[j]=s[i];
        j++;
    }
    return p;
}
int countwords(char s[])
{
    int i=0,count=0;
    while(s[i])
    {
        if(s[i]==' ')
        {
            count++;
        }
        i++;
    }
    return (count+1);
}
