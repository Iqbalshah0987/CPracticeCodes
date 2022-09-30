#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a,b;
public:
    void input();
    void display();
    A operator++(int);  //post increament
    A operator++();  //pre increament
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
A A::operator++(int)   //post increament
{
   A temp;
   temp.a=a++;
   temp.b=b++;
   return(temp);
}
A A::operator++()  //pre increament
{
   A temp;
   temp.a=++a;
   temp.b=++b;
   return(temp);
}
int main()
{
    A a1,a2,a3;
    a1.input();
    a1.display();
    a2=a1++;   //a2=a1.operator++();
    a2.display();
    a1.display();
    a3=++a1;   //a3=a1.operator++();
    a3.display();
    a2.display();
    a1.display();
    getch();
}
