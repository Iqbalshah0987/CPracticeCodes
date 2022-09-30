#include<iostream>
#include<conio.h>
using namespace std;
struct selection
{
    int capacity;
    int *a;
};
selection *createarray(int cap)
{
    selection *a;
    a=new selection;
    a->capacity=cap;
    a->a=new int[cap];
    return a;
}
void selectionsort(selection *arr)    //selection sort.
{
    int i,j,n;
    for(i=0; i<arr->capacity-1; i++)
        for(j=i+1; j<arr->capacity; j++)
            if(arr->a[i]>arr->a[j])
            {
                n=arr->a[i];
                arr->a[i]=arr->a[j];
                arr->a[j]=n;
            }
    cout<<endl<<"After sorting elements:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
}
int main()
{
    selection *arr;
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
    selectionsort(arr);
    getch();
}
