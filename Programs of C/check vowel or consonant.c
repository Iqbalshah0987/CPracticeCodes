#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("Enter character for check vowel or consonant:");
    scanf("%c",&ch);
    ch=tolower(ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
        printf("%c is vowel.",ch);
    else
        printf("%c is consonant.",ch);
    getch();
}
