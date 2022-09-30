#include<iostream>
#include<conio.h>
using namespace std;
struct queuenode
{
    int data;
    queuenode *next;
};
queuenode *start=NULL;
queuenode *createnode()
{
    queuenode *n;
    n=new queuenode;
    return n;
}
void Insert()
{
    queuenode *temp,*t;
    temp=createnode();
    cout<<"Enter value for insert:";
    cin>>temp->data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        t=start;
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
    }
    getch();
}
void Delete()
{
    queuenode *temp;
    if(start==NULL)
    {
        cout<<"Queue is empty.";
    }
    else
    {
        temp=start;
        start=start->next;
        cout<<"Deleted value is "<<temp->data;
        delete temp;
    }
    getch();
}
void Display()
{
    queuenode *temp;
    if(start==NULL)
        cout<<"Queue is empty.";
    else
    {
        temp=start;
        cout<<"All values are:";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    getch();
}
int main()
{
    int choice,item,cap;
    while(1)
    {
        system("cls");
        cout<<"1. Insert element in queue."<<endl;
        cout<<"2. Delete element in queue."<<endl;
        cout<<"3. Display element in queue."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
        }
    }
    getch();
}
