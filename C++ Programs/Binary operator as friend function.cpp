#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b;
public:
    void input();
    void display();
    friend A operator-(A,A);
};
void A::input()
{
    cout<<"Enter two value:";
    cin>>a>>b;
}
void A::display()
{
   cout<<"a="<<a<<"b="<<b<<endl;
}
A operator-(A x,A y)
{
    A temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return(temp);
}
int main()
{
    A a1,a2,a3;
    a1.input();
    a1.display();
    a2.input();
    a2.display();
    a3=a1-a2;  //a3=operator-(a1,a2);
    a3.display();
    getch();
}
