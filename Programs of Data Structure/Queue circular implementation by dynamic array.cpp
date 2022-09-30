#include<iostream>
#include<conio.h>
using namespace std;
struct arrayofqueue
{
    int rear,front;
    int capacity;
    int *a;
};
arrayofqueue *createarray(int cap)
{
    arrayofqueue *q;
    q=new arrayofqueue;
    q->rear=-1;
    q->front=-1;
    q->capacity=cap;
    q->a=new int[cap];
    return q;
}
void doublearray(arrayofqueue *Q)
{
    int *temp,i,j=0,cap;
    cap=Q->capacity*2;
    temp=new int[cap];
    for(i=Q->front; i!=Q->rear; i=(i+1)%Q->capacity)
    {
        temp[j]=Q->a[i];
        j++;
    }
    temp[j]=Q->a[i];
    delete []Q->a;
    Q->front=0;
    Q->rear=Q->capacity-1;
    Q->capacity=cap;
    Q->a=temp;
}
void Insert(arrayofqueue *Q,int item)
{
    if((Q->front==-1)&&(Q->rear==-1))
    {
        Q->front=0;
        Q->rear=0;
    }
    else
    {
        Q->rear=(Q->rear+1)%Q->capacity;
    }
    Q->a[Q->rear]=item;
    if((Q->front==0)&&(Q->rear==Q->capacity-1)||(Q->front==Q->rear+1))
    {
        doublearray(Q);
        cout<<"capacity="<<Q->capacity<<endl;
    }
    getch();
}
void halfarray(arrayofqueue *Q)
{
    int *temp,i,j=0,cap;
    cap=Q->capacity/2;
    temp=new int[cap];
    for(i=Q->front; i!=Q->rear; i=(i+1)%Q->capacity)
    {
        temp[j]=Q->a[i];
        j++;
    }
    temp[j]=Q->a[i];
    delete []Q->a;
    Q->front=0;
    Q->rear=cap-1;
    Q->capacity=cap;
    Q->a=temp;
}
void Delete(arrayofqueue *Q)
{
    int i,item,s=0;
    if(Q->front==-1)
    {
        cout<<"Queue is empty."<<endl;
        getch();
        return;
    }
    item=Q->a[Q->front];
    if(Q->front==Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    else
    {
       Q->front=(Q->front+1)%Q->capacity;
    }
    cout<<"Deleted value is "<<item<<endl;
    for(i=Q->front; i!=Q->rear; i=(i+1)%Q->capacity)
    {
        s++;
    }
    s++;
    if(s==Q->capacity/2)
    {
        halfarray(Q);
        cout<<"capacity="<<Q->capacity<<endl;
    }
    getch();
}
void Display(arrayofqueue *Q)
{
    if(Q->front==-1)
    {
        cout<<"Queue is empty."<<endl;
        getch();
        return;
    }
    else
    {
        int i;
        cout<<"All value in Queue are:";
        for(i=Q->front; i!=Q->rear; i=(i+1)%Q->capacity)
            cout<<Q->a[i]<<" ";
        cout<<Q->a[i]<<" ";
    }
    getch();
}
int main()
{
    int choice,item,cap;
    arrayofqueue *Q;
    Q=createarray(1);
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
            cout<<"Enter value for insert:";
            cin>>item;
            Insert(Q,item);
            break;
        case 2:
            Delete(Q);
            break;
        case 3:
            Display(Q);
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
