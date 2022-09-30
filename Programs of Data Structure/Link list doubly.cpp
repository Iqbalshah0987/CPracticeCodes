#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Node
{
    int data;
    Node *next,*prev;
};
Node *start=NULL,*tail=NULL;
Node *createnode();
void Insertatbeg(int);
void Insertatmid(int);
void Insertatend(int);
void Deleteatbeg();
void Deleteatmid();
void Deleteatend();
void Viewlistatstart();
void Viewlistatstart();
void Reverselist();
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
    temp->prev=NULL;
    if(start==NULL)
    {
        temp->next=NULL;
        start=temp;
        tail=temp;
    }
    else
    {
        start->prev=temp;
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
    if(start==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        start=temp;
        tail=temp;
    }
    else
    {
        Viewlistatstart();
        cout<<endl<<"You want to insert value Yes/No.";
        cin>>ans;
        if((!strcmp(ans,"NO"))||(!strcmp(ans,"No"))||(!strcmp(ans,"no"))||(!strcmp(ans,"nO"))||(!strcmp(ans,"N"))||(!strcmp(ans,"n")))
            return;
        Viewlistatstart();
        cout<<endl<<"You insert value after which:"<<endl;
        cout<<"choose value:";
        cin>>item;
        t=start;
        while((t->data!=item)&&(t->next!=NULL))
            t=t->next;
        if(t->data==item)
        {
            temp->prev=t;
            temp->next=t->next;
            if(t==tail)
                tail=temp;
            else
                t->next->prev=temp;
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
        temp->prev=NULL;
        start=temp;
        tail=temp;
    }
    else
    {
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}
void Deleteatbeg()
{
    Node *temp;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(start->next==NULL)
    {
        temp=start;
        start=NULL;
        tail=NULL;
    }
    else
    {
        temp=start;
        start=start->next;
        start->prev=NULL;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Deleteatmid()
{
    char ans[10];
    int item;
    Node *temp;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else
    {
        Viewlistatstart();
        cout<<endl<<"You want to delete value Yes/No.";
        cin>>ans;
        if((!strcmp(ans,"NO"))||(!strcmp(ans,"No"))||(!strcmp(ans,"no"))||(!strcmp(ans,"nO"))||(!strcmp(ans,"N"))||(!strcmp(ans,"n")))
            return;
        Viewlistatstart();
        cout<<endl<<"Which value you want to delete:"<<endl;
        cout<<"choose value:";
        cin>>item;
        temp=start;
        while(temp!=NULL)
        {
            if((temp->prev==NULL)&&(temp->next==NULL)&&(temp->data==item)) //for single node.
            {
                temp=start;
                start=NULL;
                tail=NULL;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            else if((temp->prev==NULL)&&(temp->data==item))              //for first node.
            {
                start->next->prev=NULL;
                start=start->next;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            else if((temp->next==NULL)&&(temp->data==item))          //for last node.
            {
                tail->prev->next=NULL;
                tail=tail->prev;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            else if(temp->data==item)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            temp=temp->next;
        }
        if(temp==NULL)
            cout<<item<<" is not in the list.";
    }
}
void Deleteatend()
{
    Node *temp;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(start->next==NULL)
    {
        temp=start;
        start=NULL;
        tail=NULL;
    }
    else
    {
        temp=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Viewlistatstart()
{
    Node *temp;
    if(start==NULL)
        cout<<"List is empty.";
    else
    {
        temp=start;
        cout<<"All values by start:";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void Viewlistatend()
{
    Node *temp;
    if(tail==NULL)
        cout<<"List is empty.";
    else
    {
        temp=tail;
        cout<<"All values by end:";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
}
void Reverselist()
{
    Node *temp,*nextnode;
    if(start==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            nextnode=temp->next;
            temp->next=temp->prev;
            temp->prev=nextnode;
            temp=nextnode;
        }
        temp=start;
        start=tail;
        tail=temp;
    }
    cout<<"After reverse list:"<<endl;
    Viewlistatstart();
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
        cout<<"7. View all element by start"<<endl;
        cout<<"8. View all element by end"<<endl;
        cout<<"9. Reverse of list"<<endl;
        cout<<"10. Exit"<<endl;
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
            Viewlistatstart();
            getch();
            break;
        case 8:
            Viewlistatend();
            getch();
            break;
        case 9:
            Reverselist();
            getch();
            break;
        case 10:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
            getch();
        }
    }
    getch();
}
