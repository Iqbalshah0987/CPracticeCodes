#include<iostream>
#include<conio.h>
using namespace std;
struct linear
{
    int capacity;
    int *a;
};
linear *createarray(int cap)
{
    linear *a;
    a=new linear;
    a->capacity=cap;
    a->a=new int[cap];
    return a;
}
void linearsearch(linear *arr, int item)
{
    int i;
    for(i=0; i<arr->capacity; i++)
    {
        if(item==arr->a[i])
        {
            cout<<"Element found at position "<<i+1;
            break;
        }
    }
    if(i==arr->capacity)
        cout<<item<<" is not in this list.";
}
int main()
{
    linear *arr;
    int cap,i,item;
    cout<<"Enter size of array:";
    cin>>cap;
    arr=createarray(cap);
    cout<<"Enter array element:";
    for(i=0; i<arr->capacity; i++)
        cin>>arr->a[i];
    cout<<"Array elements are:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
    cout<<endl<<"Enter element for search:";
    cin>>item;
    linearsearch(arr,item);
    getch();
}
