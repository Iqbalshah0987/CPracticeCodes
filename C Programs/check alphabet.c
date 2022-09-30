#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any number to check negative and positive:");
    scanf("%c",&ch);
    ch=tolower(ch);
    if((ch>='a')&&(ch<='z'))
        printf("%c is Alphabet.",ch);
    else if((ch>='0')&&(ch<='9'))
        printf("%c is number.",ch);
    else
        printf("%c is special symbol.",ch);
    getch();
}
