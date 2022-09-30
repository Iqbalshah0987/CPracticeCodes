#include<iostream>
#include<conio.h>
using namespace std;
struct arrayofstack
{
    int top;
    int capacity;
    int *a;
};
arrayofstack *createstack(int cap)
{
    arrayofstack *s;
    s=new arrayofstack;
    s->top=-1;
    s->capacity=cap;
    s->a=new int[cap];
    return s;
}
void Push(arrayofstack *s, int item)
{
    if(s->top==s->capacity-1)
    {
        cout<<"Stack is Overflow."<<endl;
        getch();
    }
    else
    {
        s->top++;
        s->a[s->top]=item;
    }
}
void Pop(arrayofstack *s)
{
    if(s->top==-1)
    {
        cout<<"Stack is Underflow."<<endl;
        getch();
    }
    else
    {
        int item=s->a[s->top];
        s->top--;
        cout<<"Deleted value is "<<item;
        getch();
    }
}
void Traverse(arrayofstack *s)
{
    if(s->top==-1)
    {
        cout<<"Stack is Underflow."<<endl;
        getch();
    }
    else
    {
        cout<<"All values in stack are:";
        for(int i=s->top; i>-1; i--)
        {
            cout<<s->a[i]<<" ";
        }
        getch();
    }
}
int main()
{
    int choice,item,cap;
    arrayofstack *s;
    cout<<"Enter size of a:";
    cin>>cap;
    s=createstack(cap);
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
            if(s->top==s->capacity-1)
            {
                cout<<"Stack is Overflow."<<endl;
                getch();
            }
            else
            {
                cout<<"Enter value for Push:";
                cin>>item;
                Push(s,item);
            }
            break;
        case 2:
            Pop(s);
            break;
        case 3:
            Traverse(s);
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
