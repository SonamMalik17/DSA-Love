#include<iostream>
using namespace std;

bool linearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return 1;
    }
    return 0;
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
    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;
    bool element=linearSearch(a,n,key);
    if(element)
        cout<<"Element found!!!"<<endl;
    else
        cout<<"Element not found!!!"<<endl;
    return 0;
}