#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b,s;
public:
    void input();
    void display();
    A operator-(A);
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
A A::operator-(A p)
{
   A temp;
   temp.a=a-p.a;
   temp.b=b-p.b;
   return(temp);
}
int main()
{
    A a1,a2,a3;
    a1.input();
    a2.input();
    a3=a1-a2;   //a3=a1.operator-(a2);
    a3.display();
    getch();
}
