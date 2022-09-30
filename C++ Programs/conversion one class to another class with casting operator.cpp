#include<iostream>
#include<conio.h>
using namespace std;
class B;     //Forward declaration.
class A
{
    int a,b;
public:
    void input();
    void display();
    operator B();
};
class B
{
    int a,b;
public:
    void geta(int);
    void getb(int);
    void display();
};
void A::input()
{
    cout<<"Enter two value:";
    cin>>a>>b;
}
void A::display()
{
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
A::operator B()   //casting operator
{
    B temp;
    temp.geta(a);
    temp.getb(b);
    return temp;
}
void B::geta(int x)
{
    a=x;
}
void B::getb(int y)
{
    b=y;
}
void B::display()
{
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.input();
    a1.display();
    b1=a1;      //conversion one class to another class type.//call casting operator.
    b1.display();
    getch();
}
