#include<iostream>
#include<conio.h>
using namespace std;
inline void area(int,int);   //inline function is optional on two places.
int main()
{
    int l,b;
    cout<<"Enter ractangle value:";
    cin>>l>>b;
    area(l,b);
    getch();
}
inline void area(int l,int b)    //inline function is optional on two places.
{
    cout<<"Area of ractangl is "<<l*b;
}
