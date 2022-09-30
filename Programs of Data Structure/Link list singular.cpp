#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *start=NULL;
Node *createnode();
void Insertatbeg(int);
void Insertatmid(int);
void Insertatend(int);
void Deleteatbeg();
void Deleteatmid();
void Deleteatend();
void Viewlist();
Node *createnode()
{
    Node *n;
    n=new Node;
    return n;
}
void Insertatbeg(int data)
{
    Node *temp;
    temp=createnode();
    temp->data=data;
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
}
void Insertatmid(int data)
{
    char ans[10];
    int item;
    Node *temp,*t;
    temp=createnode();
    temp->data=data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        Viewlist();
        cout<<endl<<"You want to insert value Yes/No.";
        cin>>ans;
        if((!strcmp(ans,"NO"))||(!strcmp(ans,"No"))||(!strcmp(ans,"no"))||(!strcmp(ans,"nO"))||(!strcmp(ans,"N"))||(!strcmp(ans,"n")))
            return;
        Viewlist();
        cout<<endl<<"You insert value after which:"<<endl;
        cout<<"choose value:";
        cin>>item;
        t=start;
        while((t->data!=item)&&(t->next!=NULL))
            t=t->next;
        if(t->data==item)
        {
            temp->next=t->next;
            t->next=temp;
        }
        else
            cout<<item<<" is not in the list. So we can not insert "<<data;
    }
}
void Insertatend(int item)
{
    Node *temp,*t;
    temp=createnode();
    temp->data=item;
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
}
void Deleteatbeg()
{
    Node *temp;
    if(start==NULL)
        cout<<"List is empty.";
    else
    {
        temp=start;
        start=start->next;
        cout<<"Deleted value is "<<temp->data;
        delete temp;
    }
}
void Deleteatmid()
{
    char ans[10];
    int item;
    Node *temp,*prenode=NULL;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(start->next==NULL)
    {
        temp=start;
        start=NULL;
    }
    else
    {
        Viewlist();
        cout<<endl<<"You want to delete value Yes/No.";
        cin>>ans;
        if((!strcmp(ans,"NO"))||(!strcmp(ans,"No"))||(!strcmp(ans,"no"))||(!strcmp(ans,"nO"))||(!strcmp(ans,"N"))||(!strcmp(ans,"n")))
            return;
        Viewlist();
        cout<<endl<<"Which value you want to delete:"<<endl;
        cout<<"choose value:";
        cin>>item;
        temp=start;
        while(temp->data!=item)
        {
            prenode=temp;
            temp=temp->next;
        }
        if(prenode==NULL)
            start=start->next;
        else
            prenode->next=temp->next;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Deleteatend()
{
    Node *temp,*prenode=NULL;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(start->next==NULL)
    {
        temp=start;
        start=NULL;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            prenode=temp;
            temp=temp->next;
        }
        prenode->next=NULL;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Viewlist()
{
    Node *temp;
    if(start==NULL)
        cout<<"List is empty.";
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
}
void Reverselist()
{
    Node *temp,*prev=NULL;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else
    {
        temp=start;
        while(start!=NULL)
        {
            temp=start;
            start=start->next;
            temp->next=prev;
            prev=temp;
        }
        start=prev;
    }
    cout<<"After reverse list:"<<endl;
    Viewlist();
}
int main()
{
    int choice,item;
    while(1)
    {
        system("cls");
        cout<<"1. Insert element at beginning"<<endl;
        cout<<"2. Insert element at middle"<<endl;
        cout<<"3. Insert element at end"<<endl;
        cout<<"4. Delete element at beginning"<<endl;
        cout<<"5. Delete element at middle"<<endl;
        cout<<"6. Delete element at end"<<endl;
        cout<<"7. View all element"<<endl;
        cout<<"8. Reverse of list"<<endl;
        cout<<"9. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value for insert:";
            cin>>item;
            Insertatbeg(item);
            break;
        case 2:
            cout<<"Enter value for insert:";
            cin>>item;
            Insertatmid(item);
            getch();
            break;
        case 3:
            cout<<"Enter value for insert:";
            cin>>item;
            Insertatend(item);
            break;
        case 4:
            Deleteatbeg();
            getch();
            break;
        case 5:
            Deleteatmid();
            getch();
            break;
        case 6:
            Deleteatend();
            getch();
            break;
        case 7:
            Viewlist();
            getch();
            break;
        case 8:
            Reverselist();
            getch();
            break;
        case 9:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
            getch();
        }
    }
    getch();
}
