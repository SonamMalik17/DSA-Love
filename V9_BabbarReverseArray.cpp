#include<iostream>
using namespace std;

void reverseArray(int a[],int n)
{
    int start=0;
    int end=n-1;
    int temp;
    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }  
}

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the length of array : "<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array before reversing : "<<endl;
    printArray(a,n);
    reverseArray(a,n);
    cout<<"Array after reversing : "<<endl;
    printArray(a,n);
    return 0;
}