#include<iostream>
#include<conio.h>
using namespace std;
template<class X>
class A
{
    X a,b;    //generic variable.
public:
    X input();    //generic function.
    X display();
    X big();
};
template<class X>    //when we write function outside the class also write template.
X A<X>::input()      //and also write <type> middle in membership label.
{
    cout<<"Enter value:";
    cin>>a>>b;
}
template<class X>
X A<X>::big()
{
    if(a>b)
        cout<<"greater value is "<<a<<endl;
    else
        cout<<"greater value is "<<b<<endl;
}
int main()
{
    A <int>a1;   //compalsary to write <data type> after object.
    A <double>a2;
    a1.input();
    a1.big();
    a2.input();
    a2.big();
    getch();
}
