#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    a=5;
    int &b=a;
    cout<<b;
    b=b+10;
    cout<<endl<<a;
    a=a+2;
    cout<<endl<<b;
    getch();
}
