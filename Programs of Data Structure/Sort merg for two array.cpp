#include<iostream>
#include<conio.h>
using namespace std;
struct merg
{
    int capacity;
    int *a;
};
merg *createarray(int cap)
{
    merg *a;
    a=new merg;
    a->capacity=cap;
    a->a=new int[cap];
    return a;
}
void sortarray(merg *arr)             //sort array by insertion sort.
{
    int i,j,temp;
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
}
void mergsort(merg *arr1,merg *arr2,merg *arr3)
{
    int i=0,j=0,k=0,l;
    while((i<=arr1->capacity)&&(j<=arr2->capacity))
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k]=arr1->a[i];
            i++;
            k++;
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            arr3->a[k]=arr2->a[j];
            j++;
            k++;
        }
        else
        {
            arr3->a[k]=arr1->a[i];
            i++;
            k++;
        }
    }
    if(i<=arr1->capacity)
    {
        for(l=i; l<arr1->capacity; l++)
        {
            arr3->a[k]=arr1->a[i];
            i++;
            k++;
        }
    }
    else if(j<=arr2->capacity)
    {
        for(l=j; l<arr2->capacity; l++)
        {
            arr3->a[k]=arr2->a[j];
            j++;
            k++;
        }
    }
}
int main()
{
    merg *arr1,*arr2,*arr3;
    int cap1,cap2,i;
    cout<<"Enter size of first array:";     //for first array.
    cin>>cap1;
    arr1=createarray(cap1);
    cout<<"Enter first array element:";
    for(i=0; i<arr1->capacity; i++)
        cin>>arr1->a[i];

    sortarray(arr1);
    cout<<"Sorted first array:";
    for(i=0; i<arr1->capacity; i++)
        cout<<arr1->a[i]<<" ";

    cout<<endl<<"Enter size of second array:";     //for second array.
    cin>>cap2;
    arr2=createarray(cap2);
    cout<<"Enter second array element:";
    for(i=0; i<arr2->capacity; i++)
        cin>>arr2->a[i];

    sortarray(arr2);
    cout<<"Sorted second array:";
    for(i=0; i<arr2->capacity; i++)
        cout<<arr2->a[i]<<" ";

    arr3=createarray(cap1+cap2);            //after merging array.
    cout<<endl<<"capacity="<<arr3->capacity<<endl;
    mergsort(arr1,arr2,arr3);
    cout<<"Sorted array elements are:";
    for(i=0; i<arr3->capacity; i++)
        cout<<arr3->a[i]<<" ";
    getch();
}
