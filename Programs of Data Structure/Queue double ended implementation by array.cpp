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
void Insertfront(arrayofqueue *Q,int item)
{
    if((Q->front==0)&&(Q->rear==Q->capacity-1)||(Q->front==Q->rear+1))
    {
        cout<<"Queue is Full."<<endl;
        getch();
        return;
    }
    else if((Q->front==-1)&&(Q->rear==-1))
    {
        Q->front=Q->capacity-1;
        Q->rear=Q->capacity-1;
    }
    else
    {
        if(Q->front==0)
            Q->front=Q->capacity-1;
        else
            Q->front--;
    }
    Q->a[Q->front]=item;
    getch();
}
void Insertrear(arrayofqueue *Q,int item)
{
    if((Q->front==0)&&(Q->rear==Q->capacity-1)||(Q->front==Q->rear+1))
    {
        cout<<"Queue is Full."<<endl;
        getch();
        return;
    }
    else if((Q->front==-1)&&(Q->rear==-1))
    {
        Q->front=0;
        Q->rear=0;
    }
    else
    {
        Q->rear=(Q->rear+1)%Q->capacity;
    }
    Q->a[Q->rear]=item;
    getch();
}
void Deletefront(arrayofqueue *Q)
{
    if(Q->front==-1)
    {
        cout<<"Queue is empty."<<endl;
        getch();
        return;
    }
    int item=Q->a[Q->front];
    if(Q->front==Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    else
    {
       Q->front=(Q->front+1)%Q->capacity;
    }
    cout<<"Deleted value is "<<item;
    getch();
}
void Deleterear(arrayofqueue *Q)
{
     if(Q->front==-1)
    {
        cout<<"Queue is empty."<<endl;
        getch();
        return;
    }
    int item=Q->a[Q->rear];
    if(Q->front==Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    else
    {
        if(Q->rear==0)
            Q->rear=Q->capacity-1;
        else
            Q->rear--;
    }
    cout<<"Deleted value is "<<item;
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
    cout<<"Enter size of array:";
    cin>>cap;
    Q=createarray(cap);
    while(1)
    {
        system("cls");
        cout<<"1. Insert element in front of queue."<<endl;
        cout<<"2. Insert element in rear of queue."<<endl;
        cout<<"3. Delete element in front of queue."<<endl;
        cout<<"4. Delete element in rear of queue."<<endl;
        cout<<"5. Display element in queue."<<endl;
        cout<<"6. Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            if((Q->front==0)&&(Q->rear==Q->capacity-1)||(Q->front==Q->rear+1))
            {
                cout<<"Queue is Full."<<endl;
                getch();
            }
            else
            {
                cout<<"Enter value for insert:";
                cin>>item;
                Insertfront(Q,item);
            }
            break;
        case 2:
            if((Q->front==0)&&(Q->rear==Q->capacity-1)||(Q->front==Q->rear+1))
            {
                cout<<"Queue is Full."<<endl;
                getch();
            }
            else
            {
                cout<<"Enter value for insert:";
                cin>>item;
                Insertrear(Q,item);
            }
            break;
        case 3:
            Deletefront(Q);
            break;
        case 4:
            Deleterear(Q);
            break;
        case 5:
            Display(Q);
            break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
            getch();
        }
    }
    getch();
}
