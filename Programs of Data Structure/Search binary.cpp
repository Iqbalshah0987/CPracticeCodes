#include<iostream>
#include<conio.h>
using namespace std;
struct binary
{
    int capacity;
    int low,high;
    int *a;
};
binary *createarray(int cap)
{
    binary *a;
    a=new binary;
    a->capacity=cap;
    a->low=0;
    a->high=cap-1;
    a->a=new int[cap];
    return a;
}
void sortforsearch(binary *arr)    //selection sort.
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
void binarysearch(binary *arr, int item)
{
    int i,mid;
    while(arr->low<=arr->high)
    {
        mid=(arr->low+arr->high)/2;
        if(arr->a[mid]>item)
            arr->high=mid-1;
        else if(arr->a[mid]<item)
            arr->low=mid+1;
        else
        {
            cout<<"Element found at position "<<mid+1;
            break;
        }
    }
    if(arr->low>arr->high)
        cout<<item<<" is not in this list.";
}
int main()
{
    binary *arr;
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
    sortforsearch(arr);
    cout<<endl<<"Enter element for search:";
    cin>>item;
    binarysearch(arr,item);
    getch();
}
