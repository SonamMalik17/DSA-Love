#include<iostream>
using namespace std;

// HW
int arraySum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int a[100];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=arraySum(a,n);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}