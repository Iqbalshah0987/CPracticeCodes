#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b,x,y;
public:
    A();
    A(int,int);
    A(A &);
};
A::A()      //default constructor.
{
    a=0; b=0;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}
A::A(int c,int d)      //parameterize constructor.
{
   x=c; y=d;
   cout<<"x="<<x<<" "<<"y="<<y<<endl;
}
A::A(A &p)        //copy constructor.
{
    a=p.x; b=p.y;
    cout<<"a="<<a<<" "<<"b="<<b;
}
int main()
{
    A a1,a2(3,4),a3(a2);
    getch();

}
