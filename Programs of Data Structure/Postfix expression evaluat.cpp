#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct stackofarray
{
    char *postfix;
    int *a;
    int top;
    int capacity;
};
stackofarray *createstack(int cap)
{
    stackofarray *s;
    s=new stackofarray;
    s->top=-1;
    s->capacity=cap;
    s->postfix=new char[cap];
    s->a=new int[cap];
    return s;
}
void push(stackofarray *s,int item)
{
    if(s->top==s->capacity-1)
        return;
    else
    {
        s->top++;
        s->a[s->top]=item;
    }
}
int pop(stackofarray *s)
{
    char ch;
    if(s->top==-1)
        return 0;
    else
    {
        ch=s->a[s->top];
        s->top--;
    }
    return ch;
}
void Display(stackofarray *s)
{
    int i;
    if(s->top!=-1)
        for(i=0; i<=s->top; i++)
            cout<<s->a[i]<<" ";
}
int isdigit(char item)
{
    if((item>='0')&&(item<='9'))
        return 1;
    return 0;
}
int main()
{
    char item,popitem;
    int cap,i,num1,num2,ans;
    stackofarray *s;
    cout<<"How many character in Postfix expression:";
    cin>>cap;
    s=createstack(cap);
    cout<<"Enter Postfix expression:";
    for(i=0; i<s->capacity; i++)
        cin>>s->postfix[i];
    cout<<"Postfix expression is:";
    for(i=0; i<s->capacity; i++)
        cout<<s->postfix[i]<<" ";
    cout<<endl;
    i=0;
    while(s->postfix[i]!='\0')
    {
        item=s->postfix[i];
        if(isdigit(item))
            push(s,item-'0');
        else
        {
            num1=pop(s);
            num2=pop(s);
            switch(item)
            {
            case '^':
                ans=pow(num2,num1);
                break;
            case '/':
                ans=num2/num1;
                break;
            case '*':
                ans=num2*num1;
                break;
            case '+':
                ans=num2+num1;
                break;
            case '-':
                ans=num2-num1;
                break;
            }
            push(s,ans);
        }
        Display(s);
        cout<<endl;
        i++;
    }
    cout<<endl<<"Evaluation is:"<<pop(s);
    getch();
}
