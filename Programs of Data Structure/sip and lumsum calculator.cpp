#include<iostream>
#include<conio.h>
using namespace std;
void sip();
void lumpsum();
int main()
{
    int choice;
    do
    {
        system("cls");
        cout<<"1. SIP Calculator."<<endl;
        cout<<"2. Lumpsum Calculator."<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            sip();
            getch();
            break;
        case 2:
            lumpsum();
            getch();
            break;
        case 3:
            exit(1);
        default:
            cout<<"Invalid choice.";
            getch();
        }
    }while(1);
    getch();
}
void sip()
{
    int year;
    float amount,rate,ex;
    long double Amount=0,temp=0,Return;
    cout<<"Enter Investment Amount for per month:";
    cin>>amount;
    cout<<"Expected return rate per anum:";
    cin>>rate;
    cout<<"Time Period(in year):";
    cin>>year;
    cout<<"Expense ratio and extra charges:";
    cin>>ex;
    for(int i=1; i<=year; i++)
    {
        for(int j=1; j<=12; j++)
        {
            temp=temp+amount;
            Amount=Amount+amount;
        }
        Amount=Amount+(Amount*rate/100);
        Amount=Amount-(Amount*ex/100);
    }
    Return=Amount-temp;
    cout<<"Investment Amount:"<<temp<<endl;
    cout<<"Estimate return:"<<Return<<endl;
    cout<<"Total Amount:"<<Amount<<endl;
}
void lumpsum()
{
    int year;
    float amount,rate,ex;
    long double Amount=0,Return;
    cout<<"Enter Investment Amount for one time:";
    cin>>amount;
    cout<<"Expected return rate per anum:";
    cin>>rate;
    cout<<"Time Period(in year):";
    cin>>year;
    cout<<"Expense ratio and extra charges:";
    cin>>ex;
    Amount=amount;
    for(int i=1; i<=year; i++)
    {
        Amount=Amount+(Amount*rate/100);
        Amount=Amount-(Amount*ex/100);
    }
    Return=Amount-amount;
    cout<<"Investment Amount:"<<amount<<endl;
    cout<<"Estimate return:"<<Return<<endl;
    cout<<"Total Amount:"<<Amount<<endl;
}
