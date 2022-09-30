#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int balance;  //instance member variable.
    static int id;  //static member variable/class variable.
public:
    void input();
    static void setid();  //static member function/class function.
    void display();
};
void A::input()
{
    cout<<"Enter balance:";
    cin>>balance;
}
void A::setid()
{
    cout<<"Enter id:";
    cin>>id;
}
void A::display()
{
    cout<<balance<<" "<<id;
}
int A::id;  //Static member variable definition.
int main()
{
    A c1,c2;
    c1.input();
    c1.setid();
    c1.display();
    c2.input();
    A::setid();  //static member function and variable calling without object.
    c2.display();
    getch();
}
