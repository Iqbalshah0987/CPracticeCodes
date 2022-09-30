#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *tail=NULL;
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
    if(tail==NULL)
    {
        temp->next=temp;
        tail=temp;
    }
    else
    {
        temp->next=tail->next;
        tail->next=temp;
    }
}
void Insertatmid(int data)
{
    char ans[10];
    int item;
    Node *temp,*t;
    temp=createnode();
    temp->data=data;
    if(tail==NULL)
    {
        temp->next=temp;
        tail=temp;
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
        t=tail->next;
        while(t!=tail)
        {
            if(t->data==item)
            {
                temp->next=t->next;
                t->next=temp;
                break;
            }
            t=t->next;
        }
        if((t->data==item)&&(t==tail))
        {
            temp->next=t->next;
            t->next=temp;
            tail=temp;
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
    if(tail==NULL)
    {
        temp->next=temp;
        tail=temp;
    }
    else
    {
        temp->next=tail->next;
        tail->next=temp;
        tail=temp;
    }
}
void Deleteatbeg()
{
    Node *temp;
    if(tail==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(tail==tail->next)
    {
        temp=tail->next;
        tail=NULL;
    }
    else
    {
        temp=tail->next;
        tail->next=temp->next;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Deleteatmid()
{
    char ans[10];
    int item;
    Node *temp,*prenode=NULL;
    if(tail==NULL)
    {
        cout<<"List is empty.";
        return;
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
        if((tail==tail->next)&&(tail->data==item))     //for single node.
        {
            temp=tail->next;
            tail=NULL;
            cout<<"Deleted value is "<<temp->data;
            delete temp;
            return;
        }
        if(tail->next->data==item)                  //for first node.
        {
            temp=tail->next;
            tail->next=temp->next;
            cout<<"Deleted value is "<<temp->data;
            delete temp;
            return;
        }
        temp=tail->next;
        while(temp!=tail)
        {
            if(temp->data==item)                    //for middle node
            {
                prenode->next=temp->next;
                cout<<"Deleted value is "<<temp->data;
                delete temp;
                return;
            }
            prenode=temp;
            temp=temp->next;
        }
        if((temp->data==item)&&(temp==tail))            //for last node.
        {
            prenode->next=temp->next;
            tail=prenode;
            cout<<"Deleted value is "<<temp->data;
            delete temp;
        }
        else
            cout<<item<<" is not in the list.";
    }

}
void Deleteatend()
{
    Node *temp,*prenode=NULL;
    if(tail==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else if(tail==tail->next)
    {
        temp=tail->next;
        tail=NULL;
    }
    else
    {
        temp=tail->next;
        while(temp!=tail)
        {
            prenode=temp;
            temp=temp->next;
        }
        prenode->next=temp->next;
        tail=prenode;
    }
    cout<<"Deleted value is "<<temp->data;
    delete temp;
}
void Viewlist()
{
    Node *temp;
    if(tail==NULL)
        cout<<"List is empty.";
    else
    {
        temp=tail->next;
        cout<<"All values are:";
        while(temp!=tail)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
    }
}
void Reverselist()
{
    Node *temp,*nextnode,*prev=NULL;
    if(tail==NULL)
    {
        cout<<"List is empty.";
        return;
    }
    else
    {
        temp=tail->next;
        nextnode=temp->next;
        while(temp!=tail)
        {
            prev=temp;
            temp=nextnode;
            nextnode=temp->next;
            temp->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
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
