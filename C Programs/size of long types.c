#include<conio.h>
int main()
{
    char chartype;
    long int longinttype;
    float floattype;
    long double longdoubletype;
    long longtype;
    long long longlongtype;
    printf("size of char: %u bytes\n",sizeof(chartype));
    printf("size of long int: %u bytes\n",sizeof(longinttype));
    printf("size of float: %u bytes\n",sizeof(floattype));
    printf("size of long double: %u bytes\n",sizeof(longdoubletype));
    printf("size of long: %u bytes\n",sizeof(longtype));
    printf("size of long long: %u bytes\n",sizeof(longlongtype));
    getch();
}
