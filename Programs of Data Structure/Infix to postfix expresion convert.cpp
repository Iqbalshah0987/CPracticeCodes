#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct stackofarray
{
    char *a,*opr,*infix;
    int topopr,top;
    int capacity;
};
stackofarray *createstack(int cap)
{
    stackofarray *s;
    s=new stackofarray;
    s->topopr=-1;
    s->top=-1;
    s->capacity=cap;
    s->infix=new char[cap];
    s->opr=new char[cap];
    s->a=new char[cap];
    return s;
}
void pushopr(stackofarray *s,char item)
{
    if(s->topopr==s->capacity-1)
        return;
    else
    {
        s->topopr++;
        s->opr[s->topopr]=item;
    }
}
char popopr(stackofarray *s)
{
    char ch;
    if(s->topopr==-1)
        return 0;
    else
    {
        ch=s->opr[s->topopr];
        s->topopr--;
    }
    return ch;
}
char peepopr(stackofarray *s)
{
    char ch;
    if(s->topopr!=-1)
        ch=s->opr[s->topopr];
    return ch;
}
void Displayopr(stackofarray *s)
{
    int i;
    if(s->topopr!=-1)
    {
        for(i=0; i<=s->topopr; i++)
            cout<<s->opr[i]<<" ";
    }
}
void push(stackofarray *s,char item)
{
    if(s->top==s->capacity-1)
        return;
    else
    {
        s->top++;
        s->a[s->top]=item;
    }
}
void Display(stackofarray *s)
{
    int i;
    if(s->top!=-1)
    {
        for(i=0; i<=s->top; i++)
            cout<<s->a[i]<<" ";
    }
}
int getpriority(char item)
{
    switch(item)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    }
    return -1;
}
int main()
{
    char item,popitem;
    int cap,i;
    stackofarray *s;
    cout<<"How many character in Infix expression:";
    cin>>cap;
    s=createstack(cap);
    cout<<"Enter Infix expression:";
        cin>>s->infix;
    cout<<"Infix expression is:";
        cout<<s->infix;
    cout<<endl;
    i=0;
    while(s->infix[i]!='\0')
    {
        item=s->infix[i];
        if(item=='(')
            pushopr(s,item);
        else if(item==')')
        {
            while(peepopr(s)!='(')
            {
                popitem=popopr(s);
                push(s,popitem);
            }
            popopr(s);
        }
        else if((item=='^')||(item=='*')||(item=='/')||(item=='+')||(item=='-'))
        {
            if(s->topopr>=0)
            {
                while((getpriority(peepopr(s))>=getpriority(item))&&(s->topopr!=-1))
                {
                    popitem=popopr(s);
                    push(s,popitem);
                }
            }
            pushopr(s,item);
        }
        else
            push(s,item);
        Displayopr(s);
        Display(s);
        cout<<endl;
        i++;
    }
    if(s->topopr!=-1)
    {
        while(s->topopr!=-1)
        {
            popitem=popopr(s);
            push(s,popitem);
        }
    }
    cout<<endl<<"Postfix expression is:";
    for(i=0; i<=s->top; i++)
        cout<<s->a[i];
    getch();
}
