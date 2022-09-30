#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b;
public:
    void input();
    void display();
};
void A::input()
{
    cout<<"Enter value";
    cin>>a>>b;
}
void A::display()
{
    cout<<"a="<<a<<"b="<<b;
}
int main()
{
    A a1,*p;  //object pointer;
    p=&a1;
    p->input();
    p->display();
    getch();
}
