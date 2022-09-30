#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];
    int i;
    printf("Enter string to change upper and lower case:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a')&&(str[i]<='z'))
            str[i]=*(str+i)-32;
    }
    printf("After string case change string in Upper case:");
    puts(str);
    getch();
}
