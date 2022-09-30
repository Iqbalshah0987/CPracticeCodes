#include<iostream>
#include<conio.h>
using namespace std;
struct quick
{
    int capacity;
    int low,high;
    int *a;
};
int partitionarray(quick *arr,int low,int high);
quick *createarray(int cap)
{
    quick *arr;
    arr=new quick;
    arr->capacity=cap;
    arr->low=0;
    arr->high=cap-1;
    arr->a=new int[cap];
    return arr;
}
void quicksort(quick *arr,int low,int high)
{
    int pivloc;
    if(low>=high)
        return;
    else
    {
        pivloc=partitionarray(arr,low,high);
        quicksort(arr,low,pivloc-1);         //process of left sublist.
        quicksort(arr,pivloc+1,high);        //process of right sublist.
        cout<<"quick"<<endl;
    }
}
int partitionarray(quick *arr,int low,int high)
{
    int temp,i,j,pivot;
    pivot=arr->a[low];
    i=low+1;
    j=high;
    while(i<=j)
    {
        while((arr->a[i]<pivot)&&(i<=j))
            i++;
        while((arr->a[j]>pivot)&&(j>=i))
            j--;
        if(i<j)
        {
            temp=arr->a[i];
            arr->a[i]=arr->a[j];
            arr->a[j]=temp;
            i++;
            j--;
            for(int l=0; l<arr->capacity; l++)
                cout<<arr->a[l]<<" ";
            cout<<endl;
        }
        else
        {
            temp=arr->a[low];
            arr->a[low]=arr->a[j];
            arr->a[j]=temp;
            for(int l=0; l<arr->capacity; l++)
                cout<<arr->a[l]<<" ";
            cout<<endl;
        }
    }
    cout<<"partition"<<endl;
    return j;
}
int main()
{
    quick *arr;
    int cap,i;
    cout<<"Enter size of array:";
    cin>>cap;
    arr=createarray(cap);
    cout<<"Enter array element:";
    for(i=0; i<arr->capacity; i++)
        cin>>arr->a[i];
    quicksort(arr,arr->low,arr->high);
    cout<<"Sorted array elements are:";
    for(i=0; i<arr->capacity; i++)
        cout<<arr->a[i]<<" ";
    getch();
}
