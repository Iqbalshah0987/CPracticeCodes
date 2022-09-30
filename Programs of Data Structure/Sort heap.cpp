#include<iostream>
#include<conio.h>
using namespace std;
struct heap
{
    int *a;
    int capacity,count;
};
heap *createheap(int);
void Heapsort(heap *);
void Buildmaxheap(heap *);
void Heapify(heap *,int );
heap *createheap(int cap)
{
    heap *h;
    h=new heap;
    h->capacity=cap;
    h->count=cap;
    h->a=new int[cap];
    return h;
}
void Heapsort(heap *h)
{
    int n,i,temp;
    Buildmaxheap(h);
    n=h->count;
    for(i=h->count-1; i>=0; i--)
    {
        temp=h->a[0];
        h->a[0]=h->a[i];
        h->a[i]=temp;
        h->count--;
        Heapify(h,0);
    }
    h->count=n;
}
void Buildmaxheap(heap *h)
{
    int i;
    for(i=(h->count-1)/2; i>=0; i--)
        Heapify(h,i);
}
void Heapify(heap *h,int i)
{
    int left,right,max,temp;
    max=i;
    left=2*i+1;
    right=2*i+2;
    if((left<h->count)&&(h->a[left]>h->a[i]))
        max=left;
    else
        max=i;
    if((right<h->count)&&(h->a[right]>h->a[max]))
        max=right;
    if(max!=i)
    {
        temp=h->a[i];
        h->a[i]=h->a[max];
        h->a[max]=temp;
        Heapify(h,max);
    }
}
int main()
{
    int cap,i;
    heap *h;
    cout<<"Enter capacity of array:";
    cin>>cap;
    h=createheap(cap);
    cout<<"Enter array elements:";
    for(i=0; i<h->capacity; i++)
        cin>>h->a[i];
    Heapsort(h);
    cout<<"Sorted elements are:";
    for(i=0; i<h->capacity; i++)
        cout<<h->a[i]<<" ";
    getch();
}
