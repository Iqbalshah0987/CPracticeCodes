#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int a,b;
public:
    void input()       //Function declare inside the class.
    {
        cout<<"Enter value:";
        cin>>a>>b;
    }
    void display();
};
void complex::display()  //Function declare outside the class.
    {
        cout<<"Complex number is "<<a<<"+"<<b<<"i";
    }
int main()
{
    complex c;
    c.input();
    c.display();
    getch();
}
