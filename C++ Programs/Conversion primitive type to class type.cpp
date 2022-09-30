#include<iostream>
#include<conio.h>
            //primitive type to class type conversion only use with constructor.
using namespace std;
class A
{
    int a,b;
public:
    A();
    A(int);
    void input();
    void display();
};
A::A()
{

}
A::A(int x)
{
    b=x;
}
void A::input()
{
    cout<<"Enter one value:";
    cin>>a;
}
void A::display()
{
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
int main()
{
    A a1;
    a1.input();
    int x;
    cout<<"Enter one value:";
    cin>>x;
    a1=x;     //conversion primitive type to class type.//call parameterize constructor.
    a1.display();
    getch();
}
