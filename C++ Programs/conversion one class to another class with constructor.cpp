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
    int geta();
    int getb();
};
class B
{
    int a,b;
public:
    B();
    B(A);
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
int A::geta()
{
    return a;
}
int A::getb()
{
    return b;
}
B::B()
{

}
B::B(A p)
{
    a=p.geta();
    b=p.getb();
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
    b1=a1;      //conversion one class to another class type.//call parameterize constructor.
    b1.display();
    getch();
}
