#include<iostream>
#include<conio.h>
using namespace std;
struct bubble
{
    int capacity;
    int *a;
};
bubble *createarray(int cap)
{
    bubble *a;
    a=new bubble;
    a->capacity=cap;
    a->a=new int[cap];
    return a;
}
void bubblesort(bubble *arr)    //bubble sort.
{
    int i,j,n;
    for(i=0; i<arr->capacity; i++)
        for(j=0; j<arr->capacity-i; j++)
            if(arr->a[j]>=arr->a[j+1])
            {
                n=arr->a[j];
                arr->a[j]=arr->a[j+1];
                arr->a[j+1]=n;
            }
    cout<<endl<<"After sorting elements:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
}
int main()
{
    bubble *arr;
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
    bubblesort(arr);
    getch();
}
