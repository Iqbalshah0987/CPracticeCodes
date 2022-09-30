#include<conio.h>
void main()
{
    char ch;
    printf("Enter U for uppercase and L for lowercase:");
    scanf("%c",&ch);
    if((ch=='U')||(ch=='u'))
    {
        for(ch='A'; ch<='Z'; ch++)
        {
            printf("%c ",ch);
        }
    }
    else if((ch=='L')||(ch=='l'))
    {
        for(ch='a'; ch<='z'; ch++)
        {
            printf("%c ",ch);
        }
    }
    else
    {
        printf("Invalid number.");
    }
    getch();
}
