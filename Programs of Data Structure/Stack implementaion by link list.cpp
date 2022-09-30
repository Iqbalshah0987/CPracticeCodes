#include<iostream>
#include<conio.h>
using namespace std;
struct nodeofstack
{
    int data;
    nodeofstack *next;
};
nodeofstack *createnode()
{
    nodeofstack *n;
    n=new nodeofstack;
    return n;
}
nodeofstack *start=NULL;
void Push()
{
    nodeofstack *temp;
    temp=createnode();
    cout<<"Enter value for push operation:";
    cin>>temp->data;
    if(start==NULL)
    {
        temp->next=NULL;
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
    getch();
}
void Pop()
{
    nodeofstack *temp;
    if(start==NULL)
    {
        cout<<"Stack is empty.";
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
void Traverse()
{
    nodeofstack *temp;
    if(start==NULL)
    {
        cout<<"Stack is empty.";
    }
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
    int choice;
    while(1)
    {
        system("cls");
        cout<<"1. Push Operation on stack."<<endl;
        cout<<"2. Pop Operation on stack."<<endl;
        cout<<"3. Travers all values."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Traverse();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
            getch();
        }
    }
    getch();
}
