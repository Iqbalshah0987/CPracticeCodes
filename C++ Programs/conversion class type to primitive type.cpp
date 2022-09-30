#include<iostream>
#include<conio.h>
            //class type to primitive type conversion only use with casting operator.
using namespace std;
class A
{
    int a,b;
public:
    void input();
    void display();
    operator int();
};
void A::input()
{
    cout<<"Enter one value:";
    cin>>a;
}
void A::display()
{
    cout<<"a="<<a<<endl;
}
A::operator int()   //casting operator
{
    return a;
}
int main()
{
    A a1;
    a1.input();
    a1.display();
    int x;
    x=a1;     //conversion class type to primitive type.//call casting operator.
    cout<<"x="<<x;
    getch();
}
