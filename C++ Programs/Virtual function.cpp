#include<iostream>
#include<conio.h>
using namespace std;
class B;   //Forward declaration.
class A
{
public:
    virtual void f1();   //virtual function for late binding.
    virtual void f2();   //virtual function for late binding.
};
class B:public A   //inherit of class A
{
public:
    void f1();
    void f2();
};
void A::f1()
{
    cout<<"f1 for class A";
}
void A::f2()
{
    cout<<"f2 for class A";
}
void B::f1()
{
    cout<<"f1 for class B";
}
void B::f2()
{
    cout<<"f2 for class B";
}
int main()
{
    A a1,*p;
    B b1;
    p=&b1;
    p->f1();
    p->f2();
    getch();
}
