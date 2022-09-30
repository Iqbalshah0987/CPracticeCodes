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
void Insert(arrayofqueue *Q,int item)
{
    if((Q->front>=0)&&(Q->rear==Q->capacity-1))
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
        Q->rear++;
    }
    Q->a[Q->rear]=item;
    getch();
}
void Delete(arrayofqueue *Q)
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
       Q->front++;
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
        cout<<"All value in Queue are:";
        for(int i=Q->front; i<=Q->rear; i++)
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
        cout<<"1. Insert element in queue."<<endl;
        cout<<"2. Delete element in queue."<<endl;
        cout<<"3. Display element in queue."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            if((Q->front>=0)&&(Q->rear==Q->capacity-1))
            {
                cout<<"Queue is Full."<<endl;
                getch();
            }
            else
            {
                cout<<"Enter value for insert:";
                cin>>item;
                Insert(Q,item);
            }
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
