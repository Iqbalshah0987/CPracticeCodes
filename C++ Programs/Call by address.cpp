#include<iostream>
#include<conio.h>
using namespace std;
void sum(int *,int *);
int main()
{
    int a,b;
    cout<<"Enter two value:";
    cin>>a>>b;
    cout<<"before function call swap variable "<<a<<" "<<b<<endl;
    sum(&a,&b);
    cout<<"after function call swap variable "<<a<<" "<<b;
    getch();
}
void sum(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    cout<<"swap variable "<<*a<<" "<<*b<<endl;
}
