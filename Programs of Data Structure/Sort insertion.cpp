#include<iostream>
#include<conio.h>
using namespace std;
struct insertion
{
    int capacity;
    int *a;
};
insertion *createarray(int cap)
{
    insertion *a;
    a=new insertion;
    a->capacity=cap;
    a->a=new int[cap];
    return a;
}
void insertionsort(insertion *arr)
{
    int i,temp,j;
    for(i=0; i<arr->capacity-1; i++)
    {
        temp=arr->a[i+1];
        j=i;
        while((temp<arr->a[j])&&(j>=0))
        {
            arr->a[j+1]=arr->a[j];
            j--;
        }
        arr->a[j+1]=temp;
    }
    cout<<"Sorted elements are:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
}
int main()
{
    insertion *arr;
    int cap,i;
    cout<<"Enter size of array:";
    cin>>cap;
    arr=createarray(cap);
    cout<<"Enter array element:";
    for(i=0; i<arr->capacity; i++)
        cin>>arr->a[i];
    insertionsort(arr);
    getch();
}
