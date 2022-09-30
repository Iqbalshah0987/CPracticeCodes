#include<iostream>
#include<conio.h>
using namespace std;
template<class X>
X big(X a,X b)      //Function template.
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    cout<<"Enter two integer value:";
    cin>>a>>b;
    cout<<"Greater value is "<<big(a,b)<<endl;
    double x,y;        //dynamic initialization.
    cout<<"Enter two float value:";
    cin>>x>>y;
    cout<<"Greater value is "<<big(x,y);
    getch();
}
