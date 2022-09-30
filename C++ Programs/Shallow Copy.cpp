#include<iostream>
#include<conio.h>
         //Shallow copy is by default throw copy constructor and assignment operator.
using namespace std;
class A
{
    int a,b;
public:
    void input();
    void display();
    A operator=(A);
};
void A::input()
{
    cout<<"Enter value:";
    cin>>a>>b;
}
void A::display()
{
    cout<<"a="<<a<<" "<<"b="<<b<<"\n";
}
A A::operator=(A n)
{
    a=n.a; b=n.b;
}
int main()
{
    A a1;
    a1.input();
    a1.display();
    A a2=a1;       //copy constructor, This is by default.
    a2.display();
    A a3;
    a3=a2;          //Implicit copy assignment operator.
    a3.display();
    getch();
}
