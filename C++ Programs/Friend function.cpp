#include<iostream>
#include<conio.h>
using namespace std;
class B;   //Forward declaration.
class A
{
    int a,b;
public:
    void input();
    void display();
    friend void complex(A,B);
};
class B
{
    int a,b;
public:
    void input();
    void display();
    friend void complex(A,B);
};
void A::input()
{
    cout<<"Enter complex value:";
    cin>>a>>b;
}
void A::display()
{
   cout<<a<<"+"<<b<<"i"<<endl;
}
void B::input()
{
    cout<<"Enter complex value:";
    cin>>a>>b;
}
void B::display()
{
   cout<<a<<"+"<<b<<"i"<<endl;
}
void complex(A x,B y)
{
    int a,b;
    a=x.a+y.a;
    b=x.b+y.b;
    cout<<a<<"+"<<b<<"i"<<endl;
}
int main()
{
    A a1,a2,a3;
    B b1;
    a1.input();
    a1.display();
    b1.input();
    b1.display();
    complex(a1,b1);
    getch();
}
