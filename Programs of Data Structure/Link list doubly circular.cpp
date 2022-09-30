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
    if(start==NULL)
    {
        temp->prev=temp;
        temp->next=temp;
        start=temp;
        tail=temp;
        return;
    }
    else
    {
        temp->prev=start->prev;
        start->prev=temp;
        temp->next=start;
        tail->next=temp;
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
        temp->prev=temp;
        temp->next=temp;
        start=temp;
        tail=temp;
        return;
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
        while((t->data!=item)&&(t->next!=start))
            t=t->next;
        if(t->data==item)
        {
            temp->prev=t;
            temp->next=t->next;
            if(t==tail)
            {
                tail=temp;
                start->prev=temp;
            }
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
    if(start==NULL)
    {
        temp->prev=temp;
        temp->next=temp;
        start=temp;
        tail=temp;
    }
    else
    {
        temp->next=tail->next;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
        start->prev=temp;
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
    else if(start->next==start)
    {
        temp=start;
        start=NULL;
        tail=NULL;
    }
    else
    {
        temp=start;
        start=start->next;
        start->prev=tail;
        tail->next=start;
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
        do
        {
            if((temp->prev==temp)&&(temp->next==temp)&&(temp->data==item)) //for single node.
            {
                temp=start;
                start=NULL;
                tail=NULL;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            else if((temp->prev==tail)&&(temp->data==item))              //for first node.
            {
                Deleteatbeg();
                return;
            }
            else if((temp->next==start)&&(temp->data==item))          //for last node.
            {
                Deleteatend();
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
        }while(temp!=start);
        if(temp==start)
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
    else if(start->next==start)
    {
        temp=start;
        start=NULL;
        tail=NULL;
    }
    else
    {
        temp=tail;
        tail->prev->next=tail->next;
        tail=tail->prev;
        start->prev=tail;
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
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=start);
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
        do
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }while(temp!=tail);
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
        do
        {
            nextnode=temp->next;
            temp->next=temp->prev;
            temp->prev=nextnode;
            temp=nextnode;
        }while(temp!=start);
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
