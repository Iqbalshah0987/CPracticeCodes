#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int balance;
    static int id;
public:
    void input();
    void setid();
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
    A c;
    c.input();
    c.setid();
    c.display();
    getch();
}
