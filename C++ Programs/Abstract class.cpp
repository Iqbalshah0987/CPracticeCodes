#include <iostream>
#include <conio.h>
using namespace std;
class B; // Forward declaration.
class A  // Abstract class.
{
public:
    virtual void f1() = 0; // Pure virtual function.
    void f2();
};
class B : public A // inherit of class A
{
    public:
        void f1();
};
void A::f2()
{
    cout << "f2 for class A"<<endl;
}
void B::f1()
{
    cout << "f1 for class B"<<endl;
}
int main()
{
    A *p;
    B b1;
    p = &b1;
    b1.f1();
    b1.f2();
    p->f1();
    p->f2();
    getch();
}
