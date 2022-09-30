#include<iostream>
#include<conio.h>
using namespace std;
class B;   //Forward declaration.
class A
{
public:
    void f1();
    void f2();
};
class B:public A   //inherit of class A
{
public:
    void f1();
    void f2(int);
};
void A::f1()
{
    cout<<"f1 for class A";
}
void A::f2()
{
    cout<<"f2 for class A";
}
void B::f1()   //Function Overriding Method.
{
    cout<<"f1 for class B";
}
void B::f2(int x)   //Function Hiding Method.
{
    cout<<"f2 for class B";
}
int main()
{
    B b1;
    b1.f1();
    b1.f2();   //Error.
    getch();
}
