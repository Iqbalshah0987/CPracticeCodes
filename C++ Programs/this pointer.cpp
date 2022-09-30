#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b;
public:
    void input(int,int);
    void display();
};
void A::input(int a,int b)
{
    this->a=a; this->b=b;   //'this' pointer.
}
void A::display()
{
    cout<<"a="<<a<<"b="<<b;
}
int main()
{
    A a1;
    a1.input(45,87);
    a1.display();
    getch();
}
