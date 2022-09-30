#include<iostream>
#include<conio.h>
using namespace std;
struct complex
{
private:
    int a,b;
public:
    void input()    //Function inside the structure.
    {
        cout<<"Enter value:";
        cin>>a>>b;
    }
    void display();
};
 void complex::display()  //Function outside the structure.
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
