#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b;
    const int x;
    int &y;
public:
    A(int);
    void display();
};
A::A(int n):x(4),y(n)   //Initialization of 'const' variable and 'reference' variable.
{
    a=x; b=y;
}
void A::display()
{
    cout<<"a="<<a<<" "<<"b="<<b;
}
int main()
{
    A a1(5);
    a1.display();
    getch();
}
