#include<iostream>
#include<conio.h>
using namespace std;
struct merg
{
    int capacity;
    int low,high;
    int *a;
};
int mergarray(merg *arr,int low,int high);
merg *createarray(int cap)
{
    merg *a;
    a=new merg;
    a->capacity=cap;
    a->low=0;
    a->high=cap-1;
    a->a=new int[cap];
    return a;
}
void partitionarray(merg *arr,int low,int high)
{
    int mid;
    if(low==high)
        return;
    mid=(low+high)/2;
    partitionarray(arr,low,mid);
    partitionarray(arr,mid+1,high);
    mergarray(arr,low,high);
    cout<<"partition"<<endl;
}
int mergarray(merg *arr,int low,int high)
{
    int *temp,i,j,k,mid;
    temp=new int[arr->capacity];
    mid=(low+high)/2;
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid)&&(j<=high))
    {
       if(arr->a[i]<=arr->a[j])
       {
           temp[k]=arr->a[i];
           i++;
           k++;
       }
       else if(arr->a[i]>=arr->a[j])
       {
           temp[k]=arr->a[j];
           j++;
           k++;
       }
    }
    while(i<=mid)
    {
        temp[k]=arr->a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=arr->a[j];
        j++;
        k++;
    }
    for(i=low; i<=high; i++)
        arr->a[i]=temp[i];
    for( int l=0; l<arr->capacity; l++)
        cout<<arr->a[l]<<" ";
    cout<<endl;
    cout<<"mergarray"<<endl;
    return j;
}
int main()
{
    merg *arr;
    int cap,i;
    cout<<"Enter size of array:";
    cin>>cap;
    arr=createarray(cap);
    cout<<"Enter array element:";
    for(i=0; i<arr->capacity; i++)
        cin>>arr->a[i];
    partitionarray(arr,arr->low,arr->high);
    cout<<"Sorted array elements are:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
    getch();
}
