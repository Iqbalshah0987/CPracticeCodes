#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character for check vowel or consonent:");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is vowel.",ch);
    else if(ch>=48||ch<=57)
        printf("%c is number.",ch);
    else
        printf("%c is consonent.",ch);

    getch();
}
