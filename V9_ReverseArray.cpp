#include<iostream>
using namespace std;

void reverseArray(int a[],int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
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